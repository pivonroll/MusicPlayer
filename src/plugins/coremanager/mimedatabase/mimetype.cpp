#include "mimetype.h"

namespace CoreManager {
namespace MimeDatabase {

MimeType::MimeType()
{
}

MimeType::MimeType(const QString &mime)
    : m_mime(mime)
{
}

MimeType::~MimeType()
{
}

QString MimeType::mimeName() const
{
    return m_mime;
}

bool MimeType::operator ==(const MimeType &mimeType) const
{
    return m_mime == mimeType.m_mime;
}

bool MimeType::operator !=(const MimeType &mimeType) const
{
    return m_mime != mimeType.m_mime;
}

MimeTypeUnknown::MimeTypeUnknown()
    : MimeType("unknown")
{
}

MimeTypeUnknown::~MimeTypeUnknown()
{
}

} // namespace MimeDatabase
} // namespace CoreManager
