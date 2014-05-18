#ifndef COREMANAGER_MIMEDATABASE_MIMEDATABASE_PRIVATE_H
#define COREMANAGER_MIMEDATABASE_MIMEDATABASE_PRIVATE_H

#include <QHash>
#include "mimetype.h"

namespace Core {
namespace MimeDatabase {

class MimeDatabase_Private
{
public:
    MimeDatabase_Private();

    QHash<QString, MimeType> m_mimeTypeByExtension;
};

} // namespace MimeDatabase
} // namespace CoreManager

#endif // COREMANAGER_MIMEDATABASE_MIMEDATABASE_PRIVATE_H
