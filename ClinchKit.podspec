Pod::Spec.new do |s|
  s.name = "ClinchKit"
  s.version = "1.0"
  s.summary = "The Clinch iOS SDK, for integrating Clinch into your iOS application"
  s.description = 'The Clinch iOS SDK, for integrating Clinch into your iOS application. The SDK supports iOS 8.'
  s.homepage = "https://github.com/ClinchIO/ClinchKit"
  s.license = { :type => "MIT", :file => "LICENSE" }
  s.authors = { "Damien Glancy" => "damien@clinch.io", "Steve Quinlan" => "steve@clinch.io" }
  s.social_media_url = "http://twitter.com/clinch"
  s.source = { :git => 'https://github.com/ClinchIO/ClinchKit.git', :tag => s.version.to_s }
  s.requires_arc = true
   
  s.platform = :ios, '8.0'
  s.ios.platform = :ios, '8.0'
  s.ios.preserve_paths = 'ClinchKit.framework'
  s.ios.public_header_files = 'ClinchKit.framework/Headers/*.h'
  s.ios.vendored_frameworks = 'ClinchKit.framework'
end
