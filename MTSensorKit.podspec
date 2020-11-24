#
# Be sure to run `pod lib lint MTSensorKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MTSensorKit'
  s.version          = '1.0.5'
  s.summary          = 'A short description of MTSensorKit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/minewdevelop/iOS_Pods_Minew_SensorSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'rex.xie' => 'rex.xie@minewtech.com' }
  s.source           = { :git => 'https://github.com/minewdevelop/iOS_Pods_Minew_SensorSDK.git', :tag => s.version.to_s }
  s.ios.deployment_target = '12.0'
  s.source_files = 'MTSensorKit/Classes/**/*'
  s.vendored_frameworks = 'MTSensorKit/Frameworks/*.{framework}'
end
