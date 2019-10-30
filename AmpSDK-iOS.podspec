#
# Be sure to run `pod lib lint AmpSDK-iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AmpSDK-iOS'
  s.version          = '0.1.0'
  s.summary          = 'AmpSDK-iOS is a small program based on the iOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/tangjugang/AmpSDK-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Etre' => '437418200@qq.com' }
  s.source           = { :git => 'https://github.com/tangjugang/AmpSDK-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.ios.vendored_framework   = 'AmpSDK-iOS/AmpSDK_iOS.framework'
  s.dependency 'MBProgressHUD', '~> 1.1.0'
  s.dependency 'SSZipArchive', '2.2.2'
  s.dependency 'FMDB', '2.7.5'
  s.dependency 'YYModel', '1.0.4'
end
