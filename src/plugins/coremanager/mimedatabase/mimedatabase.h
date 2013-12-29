#ifndef COREMANAGER_MIMEDATABASE_MIMEDATABASE_H
#define COREMANAGER_MIMEDATABASE_MIMEDATABASE_H

#include <QString>
#include "mimetype.h"

namespace CoreManager {
namespace MimeDatabase {

class MimeDatabase_Private;

class MimeDatabase
{
public:
    MimeDatabase();

    static MimeDatabase* instance();
    static MimeType fileMimeType(const QString &filePath);
    static void registerMimeType(const MimeType &mimeType, const QString &extension);

private:
    MimeType guessFileTypeByExtension(const QString &filePath);
    MimeType guessFileTypeByContent(const QString &filePath);

private:
    static MimeDatabase *m_instance;
    MimeDatabase_Private *d;
};

} // namespace MimeDatabase
} // namespace CoreManager

#endif // COREMANAGER_MIMEDATABASE_MIMEDATABASE_H
