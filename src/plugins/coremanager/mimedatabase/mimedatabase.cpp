#include "mimedatabase.h"
#include "mimedatabase_private.h"

#include <QFileInfo>
#include <QDebug>

namespace CoreManager {
namespace MimeDatabase {

MimeDatabase* MimeDatabase::m_instance = 0;

MimeDatabase::MimeDatabase()
{
    m_instance = this;
}

MimeDatabase *MimeDatabase::instance()
{
    return m_instance;
}

MimeType MimeDatabase::fileMimeType(const QString &filePath)
{
    MimeType mimeType = m_instance->guessFileTypeByExtension(filePath);
    if(mimeType != MimeTypeUnknown())
        return mimeType;
    else {
        mimeType = m_instance->guessFileTypeByContent(filePath);
        return mimeType;
    }

    return MimeTypeUnknown();
}

void MimeDatabase::registerMimeType(const MimeType &mimeType, const QString &extension)
{
    if(m_instance->d->m_mimeTypeByExtension.contains(extension)) {
        qDebug() << "Extension: " << extension << " is already registered for mime type: " << m_instance->d->m_mimeTypeByExtension.value(extension).mimeName();
        return;
    }
    m_instance->d->m_mimeTypeByExtension.insert(extension, mimeType);
}

MimeType MimeDatabase::guessFileTypeByExtension(const QString &filePath)
{
    QFileInfo fileInfo(filePath);

    if(m_instance->d->m_mimeTypeByExtension.contains(fileInfo.suffix()))
        return m_instance->d->m_mimeTypeByExtension.value(fileInfo.suffix());
    return MimeTypeUnknown();
}

MimeType MimeDatabase::guessFileTypeByContent(const QString &filePath)
{
    Q_UNUSED(filePath)
    // TODO(Radovan): finish mime guess by file content
    return MimeTypeUnknown();
}

} // namespace MimeDatabase
} // namespace CoreManager
