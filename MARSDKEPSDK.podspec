 
Pod::Spec.new do |s|

  s.name             = 'MARSDKEPSDK'
  s.version          = '5.6.2.2'
  s.summary          = 'EPSDK渠道'
  s.description  = <<-DESC
火星人打包工具sdk 
                   DESC
s.homepage     = "https://github.com/martiangame6263/MARSDKS.git"# 你git库的地址首页,可以在开元中国创建你的库,不需要使用什么初始化方法,不要勾选 readme
s.license          = { :type => 'MIT', :file => 'LICENSE' } #这里不需要改变,使用默认,文件指向的文件名与工程中文件名要一致。
s.author           = { '名字' => 'mailto:mz@martiangame.cn' } #作者信息：账户名，账户邮箱地址
s.source           = { :git => 'https://github.com/martiangame6263/MARSDKS.git', :tag => "MARSDKEPSDK-#{s.version}" } # 这里输入邮箱如果你在开元中国申请的 git 账号,那么把你在开元中国创建的项目的 https 网址输入到这里,
s.platform     = :ios
s.platform     = :ios, "9.0" #iOS 支持的最低级别,这里最低9.0
s.resource_bundles = {
     'EPSDKResources' => ['MARSDKEPSDK/Assets/*']
 }
s.vendored_libraries =  'MARSDKEPSDK/Classes/*.a'
s.vendored_frameworks  = 'MARSDKEPSDK/SDK/*.framework'
s.source_files = 'MARSDKEPSDK/Classes/*.{h,m,swift}'
s.public_header_files = 'MARSDKEPSDK/Classes/*.h'
s.frameworks = "Security","CoreGraphics","WebKit","CoreFoundation","StoreKit","Foundation","UIKit"
s.ios.library = "z"

s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
end