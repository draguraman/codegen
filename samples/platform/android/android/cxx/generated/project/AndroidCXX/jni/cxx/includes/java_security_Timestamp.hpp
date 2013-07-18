/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		

// Generated Code 

#ifndef _java_security_Timestamp
#define _java_security_Timestamp
//
// Scroll Down 
//








#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_security_cert_CertPath.hpp>

#include <java_util_Date.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_security_cert_CertPath;

class java_util_Date;

class java_security_Timestamp
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_security_cert_CertPath getSignerCertPath();
 java_util_Date getTimestamp();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Timestamp