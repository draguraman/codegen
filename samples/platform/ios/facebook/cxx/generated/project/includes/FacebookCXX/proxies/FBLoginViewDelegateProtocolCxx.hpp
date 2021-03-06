/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBLoginViewDelegateProtocolCxx
#define _FBLoginViewDelegateProtocolCxx

#include <FacebookCXX/proxies/FBLoginViewCxx.hpp>
#include <FacebookCXX/conformers/FBGraphUserConformerCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBLoginViewCxx;
class FBGraphUserConformerCxx;

class FBLoginViewDelegateProtocolCxx
{
public:
	//Public Constructors
	FBLoginViewDelegateProtocolCxx(const FBLoginViewDelegateProtocolCxx* cc);
	FBLoginViewDelegateProtocolCxx(const void * proxy);

	// Default Destructor
	~FBLoginViewDelegateProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void loginViewShowingLoggedInUser(FacebookCXX::FBLoginViewCxx * arg0);

	 void loginViewFetchedUserInfo_user(FacebookCXX::FBLoginViewCxx * arg0,FacebookCXX::FBGraphUserConformerCxx * arg1);

	 void loginViewShowingLoggedOutUser(FacebookCXX::FBLoginViewCxx * arg0);

	 void loginView_handleError(FacebookCXX::FBLoginViewCxx * arg0,std::string& arg1);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBLoginViewDelegateProtocolCxx
