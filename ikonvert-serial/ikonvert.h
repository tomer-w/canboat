/*
 Defines to interface with a Digital Yacht iKonvert

(C) 2009-2025, Kees Verruijt, Harlingen, The Netherlands.

This file is part of CANboat.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 */

#define IKONVERT_ASCII_PREFIX "$PDGY,"
#define IKONVERT_BINARY_PREFIX "!PDGY,"

#define PRIVATE_MSG IKONVERT_ASCII_PREFIX ",000000,"

#define ALIVE_MSG PRIVATE_MSG ",,,,,,"

#define RX_PGN_MSG_PREFIX IKONVERT_BINARY_PREFIX "%u,%u,%u,%u,%u.%u," // pgn, prio, src, dst, time followed by Base64 data
#define TX_PGN_MSG_PREFIX IKONVERT_BINARY_PREFIX "%u,%u,"             // pgn, dst followed by Base64 data
#define RX_NETWORK_STATUS_MSG PRIVATE_MSG "%u,%u,%u,%u,%u,%u"         // load, errors, count, uptime, addr, rejected tx pgn requests
#define TX_RESET_MSG IKONVERT_ASCII_PREFIX "N2NET_RESET"              // reset device incl tx/rx lists
#define TX_SET_RX_LIST_MSG IKONVERT_ASCII_PREFIX "RX_LIST"            // followed by [, <pgn>] ...
#define TX_SET_TX_LIST_MSG IKONVERT_ASCII_PREFIX "TX_LIST"            // followed by [, <pgn>] ...
#define TX_ONLINE_MSG IKONVERT_ASCII_PREFIX "N2NET_INIT,%s"           // Mode=NORMAL or ALL
#define TX_RESET_MSG IKONVERT_ASCII_PREFIX "N2NET_RESET"              // Reset device
#define TX_OFFLINE_MSG IKONVERT_ASCII_PREFIX "N2NET_OFFLINE"          // Take device online
#define TX_SHOWLISTS_MSG IKONVERT_ASCII_PREFIX "SHOW_LISTS"           // Show RX and TX lists
#define TX_SETUP_MSG IKONVERT_ASCII_PREFIX "N2NET_SETUP,%u,%u,%u,%u,," // Instance, Address, Baud, Checksum (A/V/nil)
#define TX_LIMIT_OFF IKONVERT_ASCII_PREFIX "TX_LIMIT,OFF"              // No TX limit, use at own risk
#define TX_GETNAMES_MSG IKONVERT_ASCII_PREFIX "GET_N2NET_NAME"         // Show all N2K devices
#define RX_NAK_MSG "NAK,"                                              // Error # followed by string
#define RX_ACK_MSG "ACK,"                                              // Acknowledgement of command
#define RX_TEXT_MSG "TEXT,"                                            // Status text
#define RX_SHOW_RX_LIST_MSG "ShowRXTable,"
#define RX_SHOW_TX_LIST_MSG "ShowTXTable,"

#define BAUD_RATE 230400

// #define DEFAULT_RX_LIST
//"126208,126270,126464,126720,126976,126983,126984,126985,126986,126987,126988,126992,126993,126996,126998,127233,127237,127245,127250,127251,127257,127258,127488,127489,127493,127496,127497,127498,127501,127502,127503,127504,127505,127506,127507,127508,127509,127510,127511,127512,127513,127514,128000,128259,128267,128275,128520,129025,129026,129027,129028,129029,129033,129038,129039,129040,129041,129044,129045,129283,129284,129285,129291,129301,129302,129538,129539,129540,129541,129542,129545,129546,129547,129549,129550,129551,129556,129792,129793,129794,129795,129796,129797,129798,129799,129800,129801,129802,129803,129804,129805,129806,129807,129808,129809,129810,130060,130061,130064,130065,130066,130067,130068,130069,130070,130071,130072,130073,130074,130306,130310,130311,130312,130313,130314,130315,130316,130320,130321,130322,130323,130324,130560,130567,130570,130571,130572,130573,130574,130576,130577,130578,130579,130580,130581,130582,130583,130584,130585,130586,130816,130817,130818,130819,130820,130821,130824,130827,130828,130831,130832,130834,130835,130836,130837,130838,130839,130840,130842,130843,130845,130847,130850,130851,130856,130880,130881,130944,59392,59904,60160,60416,60928,61184,61440,65001,65002,65003,65004,65005,65006,65007,65008,65009,65010,65011,65012,65013,65014,65015,65016,65017,65018,65019,65020,65021,65022,65023,65024,65025,65026,65027,65028,65029,65030,65240,65280,65285,65286,65287,65288,65289,65290,65292,65293,65309,65312,65325,65341,65345,65359,65360,65361,65371,65374,65379,65408,65409,65410,65480"
#define DEFAULT_RX_LIST1 "130310,130311"
#define DEFAULT_RX_LIST2                                                                                                           \
  "127250,65410,65480,126270,126464,126720,126976,126983,126984,126985,126986,126987,126988,126992,126993,126996,126998,127233,"   \
  "127237,127245,127250,127251,127257,127258,127488,127489,127493,127496,127497,127498,127501,127502,127503,127504,127505,127506," \
  "127507,127508,127509,127510,127511,127512,127513,127514,128000,128259,128267,128275,128520,129025,129026,129027,129028,129029," \
  "129033,129038,129039,129040,129041,129044,129045,129283,129284"
