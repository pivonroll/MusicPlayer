#ifndef COREMANAGER_MIMEDATABASE_MIMETYPE_H
#define COREMANAGER_MIMEDATABASE_MIMETYPE_H

#include <QString>

namespace Core {
namespace MimeDatabase {

class MimeType
{
public:
    MimeType();
    MimeType(const QString &mime);
    virtual ~MimeType();

    QString mimeName() const;

    bool operator ==(const MimeType &mimeType) const;
    bool operator !=(const MimeType &mimeType) const;

protected:
    QString m_mime;
};

class MimeTypeUnknown : public MimeType {
public:
    MimeTypeUnknown();
    ~MimeTypeUnknown();
};

} // namespace MimeDatabase
} // namespace CoreManager

#endif // COREMANAGER_MIMEDATABASE_MIMETYPE_H
