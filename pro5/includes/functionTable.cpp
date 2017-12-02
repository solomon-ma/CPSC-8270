#include <map>
#include <algorithm>
#include "functionTable.h"
#include "literal.h"


bool FunctionTable::found(const std::string& name) const
{
  std::map<std::string, const Node*>::const_iterator it = functions.find(name);
  if ( it == functions.end() ) return false;
  else return true;

}
void FunctionTable::insert(const std::string& name, const Node* suite)
{
	functions[name]=suite;

}
const Node* FunctionTable::getEntry(const	std::string& name) const
{
  std::map<std::string, const Node*>::const_iterator it = functions.find(name);
  if ( it == functions.end() ) throw name+std::string(" not found");
  return it->second;
}
void FunctionTable::display() const
{
	std::map<std::string, const Node*>::const_iterator it = functions.begin();
	for (; it != functions.end(); ++it)
	{
		std::cout << it->first << " : " << it->second->eval() << std::endl;
	}
}