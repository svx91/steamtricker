# steamapi

# set sources
set(STEAMTRICKER_STEAMAPI_SRC
	api.cc
	client.cc
	user.cc
	utils.cc
	apps.cc
	remotestorage.cc
	friends.cc
	matchmaking.cc
	networking.cc
	gameserver.cc
	masterserverupdater.cc
	gamecoordinator.cc
	gamestats.cc
	userstats.cc)

# create the executable
add_library(steamtricker_steamapi ${STEAMTRICKER_STEAMAPI_SRC})
