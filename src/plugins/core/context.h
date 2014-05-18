#ifndef CONTEXT_H
#define CONTEXT_H
#include <QString>

namespace Core {
namespace Context {

class Context {
public:
    explicit Context(const QString &context) :
        m_context(context) {}

    bool operator ==(const Context &context) {
        return context.m_context == m_context;
    }

    bool operator !=(const Context &context) {
        return context.m_context != m_context;
    }

    QString m_context;
};

} // namespace Context
} // namespace CoreManager

#endif // CONTEXT_H
