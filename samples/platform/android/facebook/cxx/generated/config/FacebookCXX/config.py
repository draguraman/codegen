# 	Special Types
#		_array_type		 									Java Array
#		_proxy_type 										CXX Component that proxies a Java component
#		_proxied_type										Java Component that is proxied by a CXX component
#   Special Class Tags
#		_enumerate 											Tag to indicate an entity should be enumerated
#		_generate_callback_using_interface 					Tag to indicate callback should be generated using interface
#		_generate_callback_using_extension					Tag to indicate callback should be generated using extension		
#		_do_not_generate_callback 							Tag to indicate the callback should not be generated
#		_create_proxied_using_singleton_field				Tag to indicate the proxied should be created using a singleton field		
#		_create_proxied_using_singleton_method				Tag to indicate the proxied should be created using a singleton method
#		_create_proxied_using_constructor					Tag to indicate the proxied should be created using a publicconstructor 
#		_do_not_create_proxied 								Tag to indicate the proxied java component should not be created


config = {
	'converters' : [
		{
			'cxx' : {'type': 'void'},
			'java' : {'type': 'void'},
			'name' : 'convert_void',
		}
		{
			'cxx' : {'type': 'bool'},
			'java' : {'type': 'boolean'},
			'name' : 'convert_boolean',
		}
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'byte'},
			'name' : 'convert_byte',
		}
		{
			'cxx' : {'type': 'char'},
			'java' : {'type': 'char'},
			'name' : 'convert_char',
		}
		{
			'cxx' : {'type': 'short'},
			'java' : {'type': 'short'},
			'name' : 'convert_short',
		}
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'int'},
			'name' : 'convert_int',
		}
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'long'},
			'name' : 'convert_long',
		}
		{
			'cxx' : {'type': 'float'},
			'java' : {'type': 'float'},
			'name' : 'convert_float',
		}
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'double'},
			'name' : 'convert_double',
		}
		{
			'cxx' : {'type': 'std::string'},
			'java' : {'type': 'java.lang.String'},
			'name' : 'convert_java_lang_String',
		}
		{
			'cxx' : {'type': 'bool'},
			'java' : {'type': 'java.lang.Boolean'},
			'name' : 'convert_java_lang_Boolean',
		}
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'java.lang.Byte'},
			'name' : 'convert_java_lang_Byte',
		}
		{
			'cxx' : {'type': 'char'},
			'java' : {'type': 'java.lang.Character'},
			'name' : 'convert_java_lang_Character',
		}
		{
			'cxx' : {'type': 'short'},
			'java' : {'type': 'java.lang.Short'},
			'name' : 'convert_java_lang_Short',
		}
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'java.lang.Integer'},
			'name' : 'convert_java_lang_Integer',
		}
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'java.lang.Long'},
			'name' : 'convert_java_lang_Long',
		}
		{
			'cxx' : {'type': 'float'},
			'java' : {'type': 'java.lang.Float'},
			'name' : 'convert_java_lang_Float',
		}
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.Double'},
			'name' : 'convert_java_lang_Double',
		}
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.BigInteger'},
			'name' : 'convert_java_lang_BigInteger',
		}
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.BigDecimal'},
			'name' : 'convert_java_math_BigDecimal',
		}
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'java.util.Date'},
			'name' : 'convert_java_util_Date',
		}
		{
			'cxx' : {'type': '_proxy_type'},
			'java' : {'type': '_proxied_type'},
			'name' : 'convert_proxy',
		}
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_array_type'},
			'name' : 'convert__array_type',
		}
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': 'java.util.List'},
			'name' : 'convert_java_util_List',
		}
	],
	'packages' : [
		{
			'name' : 'com.facebook',
		},
		{
			'name' : 'com.facebook.android',
		},
	],
	'classes' : [
		{
			'name' : 'com.facebook.Session',
			'tags' : ['_create_proxied_using_constructor']
			'functions' : [
				{
					'name' : 'equals',
					'params' : [
						{
								'type' : 'java.lang.Object',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'toString',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'hashCode',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'getPermissions',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'getState',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
						}
					],
				},
				{
					'name' : 'close',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'open',
					'params' : [
						{
								'type' : 'com.facebook.AccessToken',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'isClosed',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'getAuthorizationBundle',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
				},
				{
					'name' : 'isOpened',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'getApplicationId',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getAccessToken',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getExpirationDate',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'openForRead',
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'openForPublish',
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'addCallback',
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'requestNewReadPermissions',
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'requestNewPublishPermissions',
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onActivityResult',
					'params' : [
						{
								'type' : 'android.app.Activity',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.content.Intent',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'closeAndClearTokenInformation',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'removeCallback',
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'saveSession',
					'params' : [
						{
								'type' : 'com.facebook.Session',
						}
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'restoreSession',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'com.facebook.TokenCachingStrategy',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'getActiveSession',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'setActiveSession',
					'params' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'openActiveSessionFromCache',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'openActiveSession',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
						{
								'type' : 'android.app.Activity',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'openActiveSessionWithAccessToken',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'com.facebook.AccessToken',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook',
			'tags' : ['_create_proxied_using_constructor']
			'functions' : [
				{
					'name' : 'getAccessToken',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'authorize',
					'params' : [
						{
								'type' : 'android.app.Activity',
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
						}
						{
								'type' : '_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__array_type',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'request',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'extendAccessTokenIfNeeded',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'shouldExtendAccessToken',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'extendAccessToken',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'getShouldAutoPublishInstall',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'dialog',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
						}
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'authorizeCallback',
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.content.Intent',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'isSessionValid',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'logout',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getAccessExpires',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'setSession',
					'params' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getSession',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'getLastAccessUpdate',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'setTokenFromCache',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'setAccessToken',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'setAccessExpires',
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'setAccessExpiresIn',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getAppId',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'setAppId',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getAttributionId',
					'params' : [
						{
								'type' : 'android.content.ContentResolver',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'setShouldAutoPublishInstall',
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'publishInstall',
					'params' : [
						{
								'type' : 'android.content.Context',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.Facebook',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.SessionState',
			'tags' : ['_enumerate']
			'functions' : [
				{
					'name' : 'values',
					'params' : [
					],
					'returns' : [
						{
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionState'}],
								'converter' : 'convert__array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
						}
					],
				},
				{
					'name' : 'isClosed',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'isOpened',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessToken',
			'tags' : ['_do_not_create_proxied', '_do_not_generate_callback']
			'functions' : [
				{
					'name' : 'toString',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getPermissions',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'getToken',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getExpires',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'getSource',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
					],
				},
				{
					'name' : 'getLastRefresh',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'createFromExistingAccessToken',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
						}
					],
				},
				{
					'name' : 'createFromNativeLinkingIntent',
					'params' : [
						{
								'type' : 'android.content.Intent',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessTokenSource',
			'tags' : ['_enumerate']
			'functions' : [
				{
					'name' : 'values',
					'params' : [
					],
					'returns' : [
						{
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.AccessTokenSource'}],
								'converter' : 'convert__array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_generate_callback_using_interface']
			'functions' : [
				{
					'name' : 'call',
					'params' : [
						{
								'type' : 'com.facebook.Session',
						}
						{
								'type' : 'com.facebook.SessionState',
						}
						{
								'type' : 'java.lang.Exception',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_create_proxied_using_constructor', '_do_not_generate_callback']
			'functions' : [
				{
					'name' : 'setCallback',
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
				{
					'name' : 'setRequestCode',
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
				{
					'name' : 'setPermissions',
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'params' : [
						{
								'type' : 'android.app.Activity',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.SessionLoginBehavior',
			'tags' : ['_enumerate']
			'functions' : [
				{
					'name' : 'values',
					'params' : [
					],
					'returns' : [
						{
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionLoginBehavior'}],
								'converter' : 'convert__array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionDefaultAudience',
			'tags' : ['_enumerate']
			'functions' : [
				{
					'name' : 'values',
					'params' : [
					],
					'returns' : [
						{
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionDefaultAudience'}],
								'converter' : 'convert__array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$NewPermissionsRequest',
			'tags' : ['_create_proxied_using_constructor', '_do_not_generate_callback']
			'functions' : [
				{
					'name' : 'setCallback',
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
				},
				{
					'name' : 'setRequestCode',
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'params' : [
						{
								'type' : 'android.app.Activity',
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.TokenCachingStrategy',
			'tags' : ['_do_not_create_proxied']
			'functions' : [
				{
					'name' : 'clear',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'load',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
				},
				{
					'name' : 'getPermissions',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'save',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'hasTokenInformation',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'getToken',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'getExpirationDate',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'getSource',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
					],
				},
				{
					'name' : 'putToken',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putExpirationDate',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getExpirationMilliseconds',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'putExpirationMilliseconds',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putPermissions',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putSource',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getLastRefreshDate',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'putLastRefreshDate',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getLastRefreshMilliseconds',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'putLastRefreshMilliseconds',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.TokenCachingStrategy',
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook$DialogListener',
			'tags' : ['_generate_callback_using_interface']
			'functions' : [
				{
					'name' : 'onComplete',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onCancel',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onError',
					'params' : [
						{
								'type' : 'com.facebook.android.DialogError',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onFacebookError',
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.android.DialogError',
			'tags' : ['_create_proxied_using_constructor']
			'functions' : [
				{
					'name' : 'getErrorCode',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'getFailingUrl',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.DialogError',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.FacebookError',
			'tags' : ['_create_proxied_using_constructor']
			'functions' : [
				{
					'name' : 'getErrorCode',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'getErrorType',
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.FacebookError',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook$ServiceListener',
			'tags' : ['_generate_callback_using_interface']
			'functions' : [
				{
					'name' : 'onComplete',
					'params' : [
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onError',
					'params' : [
						{
								'type' : 'java.lang.Error',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'onFacebookError',
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
	],
}
