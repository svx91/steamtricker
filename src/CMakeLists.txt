# steamtricker

include_directories(${PROJECT_SOURCE_DIR}/src)

# general c compiler settings
set(CMAKE_C_FLAGS
	"-m32 -fPIC -Wall -Wextra -Werror -Wshadow -fvisibility=hidden")

# general cpp compiler settings
set(CMAKE_CXX_FLAGS
	"-m32 -fPIC -std=gnu++98 -Wall -Wextra -Werror -Wshadow -fvisibility=hidden -Wno-unused-parameter")

# build steamapi
add_subdirectory(steamapi)

# build hook
add_subdirectory(hook)

# set sources
set(STEAMTRICKER_SRC
	steamtricker.cc)

# create the executable
add_library(steamtricker SHARED ${STEAMTRICKER_SRC})
target_link_libraries(steamtricker
	hook
	steamtricker_steamapi)