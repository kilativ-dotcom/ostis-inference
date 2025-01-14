/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#pragma once

#include <vector>

#include "comparator/AddrComparator.hpp"
#include "sc-memory/sc_memory.hpp"

using namespace std;

namespace inference
{
class TemplateManager
{
public:
  explicit TemplateManager(ScMemoryContext * ms_context);

  std::vector<ScTemplateParams> createTemplateParamsList(
        ScAddr const & scTemplate,
        const vector<ScAddr> & argumentList);

vector<ScTemplateParams> createTemplateParams(
        ScAddr const & scTemplate,
        const vector<ScAddr> & argumentList);

  ~ TemplateManager() = default;

private:
  ScMemoryContext * context;

};
}
