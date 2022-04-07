#include <inery/inery.hpp>

using namespace inery;

class [[inery::contract("chatapp")]] chatapp : public inery::contract {
  
public:
  using contract::contract;

   [[inery::action]]
    void signal(std::string from, std::string to, std::string sdp, std::string candidates) {
      require_auth(get_self());
    }


private:

  struct [[inery::action]] signal {
    std::string from;
    std::string to;
    std::string sdp;
    std::string candidates;
  };

};    
