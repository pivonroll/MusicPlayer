#include "actioncontainer.h"

namespace CoreManager {
namespace ActionManager {

ActionContainer::ActionContainer(const QString &id)
    : m_id(id)
{
}

ActionContainer::~ActionContainer()
{
}

QString ActionContainer::id() const
{
    return m_id;
}

} // namespace ActionManager
} // namespace CoreManager
