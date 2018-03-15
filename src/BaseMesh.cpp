#include "BaseMesh.h"

void BaseMesh::setName(std::string _new)
{
  m_name = _new;
}

std::string BaseMesh::getName() const
{
  return m_name;
}

void BaseMesh::setID(size_t _new)
{
  m_id = _new;
}

size_t BaseMesh::getID() const
{
  return m_id;
}
