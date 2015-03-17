## Requirements

The Clinch iOS SDK supports iOS 8.x.

## Installation

### CocoaPods

Add the ClinchKit pod into your Podfile and run a `pod install` or `pod update` command.

		pod `ClinchKit`
		

### Manual Installation 

1. Add the `ClinchKit.framework` to your Xcode project (you can get it from [GitHub](https://github.com/ClinchIO/ClinchKit/tree/master)).

2. Add `ClinchKit.framework` to the `Embedded Binaries` section in your application target. You'll find `Embedded Binaries` in the `General` section of the target.

3. Make sure you are linking the following frameworks: `CoreData`

### Initialize ClinchKit

You'll need your ClinchKit app id and api key that can be requested from [support@clinch.io](support@clinch.io). Once you've your keys, initialize ClinchKit by calling the following in your application's delegate.

	ClinchKit.setApiKey(key: "<#your_api_key#>")
	ClinchKit.setApiSecret(secret: "<#your_api_secret#>")	

### Sharing ClinchKit between extensions

If you'd like to share ClinchKit between your app and extensions (for example, a Today widget), then you'll need to tell ClinchKit about your App Group Identifier (available from your Apple Developer Provisioning Center).

	ClinchKit.setAppGroupIdentifier(appGroupIdentifier: "<#group.your_group_identifier#>")	

### ClinchKit and Keychain

ClinchKit uses Keychain to securely store a users credentials, which are used to cryptographically sign each API call to ensure security. If you use ClinchKit between a few apps or between an app and extensions, you'll need to set your Keychain Access Group, so that ClinchKit running in each app will be able to access your users credentials.

	ClinchKit.setKeychainAccessGroup(accessGroup: "<#your_team_id.your_access_group#>")

### Track potential candidates interaction with your app

In order to track potential candidates interaction with your app, you must first register them:

	ClinchKit.registerUserWithEmail: <#emailAddress#>

or if you don't know their email address, via a unique identifier:

	ClinchKit.registerUserWithId: <#userId#>

### Show Application Forms

To show an application form for your company (apply to company and not a specific job):

	ClinchKit.showApplicationForm(job: nil)

To show an application form for a specific job in your company:

	ClinchKit.showApplicationForm(job: '<#job_slug#>')

### Push Notifications

ClinchKit supports push notifications to notify your apps users of important events, such as, new job positions. To register a device for push notifications, place the following in your `didRegisterForRemoteNotificationsWithDeviceToken` call in your application delegate:

	ClinchKit.setDeviceToken(token: <#deviceToken#>)

### Support

If you have any questions or queries, support is just an email (or in-app request) away at [support@clinch.io](support@clinch.io)