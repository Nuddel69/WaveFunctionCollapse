project('Wave Function Collapse', 'cpp',
  version : '0.1',
  default_options : ['warning_level=2',
                     'cpp_std=c++20',
                     'c_std=c17',
                     'default_library=static'])

# Add the include directory
inc_dir = include_directories('include')

# Windows compilation has no pre-packaged SDL2 available, and compilation takes a while.
# If you want to compile from source, remove everything but the contents of the else clause.
if host_machine.system() == 'windows'
  sdl2_dep = subproject('sdl2_windows').get_variable('sdl2_windows_dep')
else
  sdl2_dep = dependency('sdl2')
endif

animationwindow_dep = dependency('animationwindow', fallback: ['animationwindow', 'animationwindow_dep'])
std_lib_facilities_dep = dependency('std_lib_facilities', fallback: ['std_lib_facilities', 'std_lib_facilities_dep'])

if host_machine.system() == 'linux'
  compiler_flags = ['-Wconversion', '-fdiagnostics-color=always', '-Werror=return-type']
else
  compiler_flags = ['-Wconversion', '-fdiagnostics-color=always', '-Werror=return-type', '-fcolor-diagnostics', '-fansi-escape-codes']
endif

# Catch2 Unit testing
catch_subproj = subproject('catch2')
catch_dep = catch_subproj.get_variable('catch2_dep')
catch_main = catch_subproj.get_variable('catch2_with_main')
subdir('tests')

src = []

exe = executable(
  '1-wfc',
  src,
  'src/main.cpp',
  dependencies : [animationwindow_dep, sdl2_dep, std_lib_facilities_dep],
  include_directories : inc_dir,
  cpp_args : compiler_flags
)

