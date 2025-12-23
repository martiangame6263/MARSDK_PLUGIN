 
Pod::Spec.new do |s|

  s.name             = 'MARSDK_CROSSPUSHS'
  s.version          = '5.2.0'
  s.summary          = '交叉推广插件'
  s.description  = <<-DESC
火星人打包工具sdk 
                   DESC
s.homepage     = "https://github.com/martiangame6263/MARSDK.git"# 你git库的地址首页,可以在开元中国创建你的库,不需要使用什么初始化方法,不要勾选 readme
s.license          = { :type => 'MIT', :file => 'LICENSE' } #这里不需要改变,使用默认,文件指向的文件名与工程中文件名要一致。
s.author           = { '名字' => 'mailto:mz@martiangame.cn' } #作者信息：账户名，账户邮箱地址
s.source           = { :git => 'https://github.com/martiangame6263/MARSDK.git', :tag => "MARSDK_CROSSPUSHS-#{s.version}"} # 这里输入邮箱如果你在开元中国申请的 git 账号,那么把你在开元中国创建的项目的 https 网址输入到这里,
s.platform     = :ios
s.platform     = :ios, "9.0" #iOS 支持的最低级别,这里最低9.0
s.resource_bundles = {
     'MARSDKCROSSPUSH' => ['MARSDK_CROSSPUSHS/Assets/*']
 }
s.vendored_libraries =  'MARSDK_CROSSPUSHS/Classes/*.a'
s.frameworks = "AVFoundation","CoreServices","Foundation","ImageIO","MobileCoreServices","StoreKit","UIKit"

s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
end