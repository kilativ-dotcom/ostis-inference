//
// Created by vital on 03.05.2022.
//

#pragma once

#include <map>
#include <sc-memory/sc_addr.hpp>
#include <set>

using namespace std;
namespace inference
{


class ReplacementsUtils
{
public:
  static map<string, vector<ScAddr>> intersectionOfReplacements(map<string, vector<ScAddr>> const & A, map<string, vector<ScAddr>> const & B);
  static map<string, vector<ScAddr>> unionOfReplacements(map<string, vector<ScAddr>> const & A, map<string, vector<ScAddr>> const & B);
private:
  static set<string> keySet(map<string, vector<ScAddr>> const & A);
  static set<string> commonKeys(set<string> const &, set<string> const &);
  static map<string, vector<ScAddr>> copyReplacements(map<string, vector<ScAddr>> const &);
};

}
