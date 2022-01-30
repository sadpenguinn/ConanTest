#pragma once

#ifdef WIN32
  #define lib_EXPORT __declspec(dllexport)
#else
  #define lib_EXPORT
#endif

lib_EXPORT void lib();
