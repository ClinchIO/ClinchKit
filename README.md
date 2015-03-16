## Requirements
The Clinch iOS SDK supports iOS 8.x.

## Installation

### CocoaPods
Add the ClinchKit pod into your Podfile and run a `pod install` or `pod update` command.

		pod `ClinchKit`
		

### Initialize ClinchKit
You'll need your ClinchKit app id and api key that can be requested from [support@clinch.io](support@clinch.io). Once you've your keys, initialize ClinchKit be calling the following in your application's delegate.

	ClinchKit.setApiKey(key: "<#your_api_key#>")
	ClinchKit.setApiSecret(secret: "<#your_api_secret#>")
	
### Sharing ClinchKit between extensions

If you'd like to share ClinchKit between your app and extensions (for example, a Today widget), then you'll need to tell ClinchKit about your App Group Identifier (available from your Apple Developer Provisioning Center).

	ClinchKit.setAppGroupIdentifier(appGroupIdentifier: "<#group.your_group_identifier#>")
	
### ClinchKit and Keychain

ClinchKit uses Keychain to securely store a users credentials, which are used to cryptographically sign each API call to ensure security. If you use ClinchKit between a few apps or between an app and extensions, you'll need to set your Keychain Access Group, so that ClinchKit running in each app will be able to access your users credentials.

	ClinchKit.setKeychainAccessGroup(accessGroup: "<#your_team_id.your_access_group#>")
	

### Push Notifications

ClinchKit supports push notifications to notify your apps users of important events, such as, new job positions. To register a device for push notifications, place the following in your `didRegisterForRemoteNotificationsWithDeviceToken` call in your application delegate:

	ClinchKit.setDeviceToken(token: <#deviceToken#>)

### Support

If you have any questions or queries, support is just an email (or in-app request) away at [support@clinch.io](support@clinch.io)