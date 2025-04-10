unit_src = ['unit.cpp']
integration_src = ['integration.cpp']

unit_exe = executable(
  '2-Unit',
  unit_src,
  dependencies: [catch_dep],
  link_with: [catch_main],
  include_directories: inc_dir, 
  cpp_args: compiler_flags
)

integration_exe = executable(
  '3-Integration',
  integration_src,
  dependencies: [catch_dep],
  link_with: [catch_main],
  include_directories: inc_dir, 
  cpp_args: compiler_flags
)

test('unit', unit_exe)
test('integration', integration_exe)
