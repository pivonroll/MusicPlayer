#ifndef COREMANAGER_ACTIONCONTAINER_H
#define COREMANAGER_ACTIONCONTAINER_H

#include <QString>

class QMenu;
class QAction;

namespace CoreManager {
namespace ActionManager {

class ActionContainer
{
public:
    ActionContainer(const QString &id);
    virtual ~ActionContainer();

    QString id() const;

    virtual void addAction(QAction *before, QAction *action) = 0;
    virtual void addMenu(QAction *before, QMenu *menu) = 0;

    virtual void removeAction(QAction *action) = 0;
    virtual void removeMenu(QMenu *menu) = 0;

protected:
    QString m_id;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONCONTAINER_H
