#ifndef CORE_INTERNAL_COREMANAGER_PRIVATE_H
#define CORE_INTERNAL_COREMANAGER_PRIVATE_H

#include <QList>

class QMenu;

namespace CoreManagerPlugin {
namespace Internal {

class CoreManager_Private
{
public:
    CoreManager_Private();
private:
    QList<QMenu *> m_menus;
};

} // namespace Internal
} // namespace CoreManagerPlugin

#endif // CORE_INTERNAL_COREMANAGER_PRIVATE_H
