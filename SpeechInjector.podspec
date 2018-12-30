Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '10.0'
s.name = "SpeechInjector"
s.summary = "The easiest way to add voice-commands to your IOS app."
s.requires_arc = true

# 2
s.version = "1.0.11"

# 3
s.license = { :type => "BSD", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Richard E.V. Simpson" => "revsimpson@casema.nl" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://github.com/revsimpson/SpeechInjector.git"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/revsimpson/SpeechInjector.git",
:tag => "#{s.version}" }

# 7
s.framework = "UIKit"
s.dependency  'MaterialComponents/Buttons'

# 8
s.source_files = "SpeechInjector/**/*.{swift,xcassets}"

# 9
s.resources = "SpeechInjector/**/*.{png,jpeg,jpg,storyboard,xib,xcassets}"

# 10
s.swift_version = "4.2"

end
