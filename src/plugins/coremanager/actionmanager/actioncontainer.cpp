#include "actioncontainer.h"

namespace CoreManager {
namespace ActionManager {

ActionContainer::ActionContainer(const Context::Context &context)
    : m_context(context)
{
}

ActionContainer::~ActionContainer()
{
}

Context::Context ActionContainer::context() const
{
    return m_context;
}

} // namespace ActionManager
} // namespace CoreManager
