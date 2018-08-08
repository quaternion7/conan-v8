from conans import ConanFile, CMake, tools

class V8Conan(ConanFile):
    name = "v8"
    version = "7.0.174"
    license = "https://github.com/v8/v8/blob/master/LICENSE"
    url = "https://github.com/quaternion7/conan-v8"
    description = "Conan recipe for embedding Google's V8 Javascript Engine."
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = "shared=True"
    generators = "cmake"

    def package(self):
        self.copy("*.h", dst="include", keep_path=True)
        self.copy("*.so", dst="lib", keep_path=False)
        self.copy("*.bin", dst=".", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = self.collect_libs()
