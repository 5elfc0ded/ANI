#pragma once

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string_view>
#include <vector>
#include <map>
#include <chrono>

namespace bt {
    /**
     * Small brief about bt1 system:
     *  -> So, it goes through every directory entry to find any .bt files
     *  -> It reads .bt file, and then configures cpp project(-s)
     *  -> Then build time:
     *  ->  -> It goes through every file which is choosed as target to be built.
     *  ->  -> It generates object files for every file in a build list
     *  ->  -> It goes to link every generated object file with selected libraries, and spit an executable/library to whatever user want it to be.
    */

   enum OutputType {
        OT_Executable,
        OT_LibraryShared,
        OT_LibraryStatic,
        OT_Library = OT_LibraryShared
   };

   struct ProjectConfiguration {
        const std::string s_OutputName = {};
        OutputType e_OutputType = {};
        std::vector<std::string> v_BuildFilesPattern = {};
        std::vector<std::string> v_IncludeDirectories = {};
        std::vector<std::string> v_LibrariesToLink = {};
   };

   bool GetProjectConfiguration(const std::string_view& cwd, ProjectConfiguration& conf) noexcept;

}

// IMPLEMENTATION

namespace bt {
   inline bool GetProjectConfiguration(const std::string_view& _cwd, ProjectConfiguration& conf) noexcept {

        namespace fs = std::filesystem;
        const fs::path cwd = _cwd.data();

        for (const auto& e : fs::directory_iterator(cwd)) {
            
        }

        return false;
   }
}
