# -------------------------------------------
# Detect NMAKE version deducing MSVC version
# -------------------------------------------

!IFNDEF _NMAKE_VER
!  MESSAGE Macro _NMAKE_VER not defined.
!  MESSAGE Use MSVC's NMAKE to process this makefile.
!  ERROR   See previous message.
!ENDIF

!IF     "$(_NMAKE_VER)" == "6.00.8168.0"
CC_VERS_NUM = 60
!ELSEIF "$(_NMAKE_VER)" == "6.00.9782.0"
CC_VERS_NUM = 60
!ELSEIF "$(_NMAKE_VER)" == "7.00.8882"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "7.00.9466"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "7.00.9955"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "7.10.2240.8"
CC_VERS_NUM = 71
!ELSEIF "$(_NMAKE_VER)" == "7.10.3077"
CC_VERS_NUM = 71
!ELSEIF "$(_NMAKE_VER)" == "8.00.40607.16"
CC_VERS_NUM = 80
!ELSEIF "$(_NMAKE_VER)" == "8.00.50727.42"
CC_VERS_NUM = 80
!ELSEIF "$(_NMAKE_VER)" == "8.00.50727.762"
CC_VERS_NUM = 80
!ELSEIF "$(_NMAKE_VER)" == "9.00.20706.01"
CC_VERS_NUM = 90
!ELSEIF "$(_NMAKE_VER)" == "9.00.21022.08"
CC_VERS_NUM = 90
!ELSEIF "$(_NMAKE_VER)" == "9.00.30729.01"
CC_VERS_NUM = 90
!ELSEIF "$(_NMAKE_VER)" == "10.00.20506.01"
CC_VERS_NUM = 100
!ELSEIF "$(_NMAKE_VER)" == "10.00.21003.01"
CC_VERS_NUM = 100
!ELSEIF "$(_NMAKE_VER)" == "10.00.30128.01"
CC_VERS_NUM = 100
!ELSEIF "$(_NMAKE_VER)" == "10.00.30319.01"
CC_VERS_NUM = 100
!ELSEIF "$(_NMAKE_VER)" == "10.00.40219.01"
CC_VERS_NUM = 100
!ELSEIF "$(_NMAKE_VER)" == "11.00.50522.1"
CC_VERS_NUM = 110
!ELSEIF "$(_NMAKE_VER)" == "11.00.50727.1"
CC_VERS_NUM = 110
!ELSEIF "$(_NMAKE_VER)" == "11.00.51106.1"
CC_VERS_NUM = 110
!ELSEIF "$(_NMAKE_VER)" == "11.00.60315.1"
CC_VERS_NUM = 110
!ELSEIF "$(_NMAKE_VER)" == "11.00.61030.0"
CC_VERS_NUM = 110
!ELSEIF "$(_NMAKE_VER)" == "12.00.21005.1"
CC_VERS_NUM = 120
!ELSEIF "$(_NMAKE_VER)" == "14.00.23026.0"
CC_VERS_NUM = 140
!ELSEIF "$(_NMAKE_VER)" == "14.00.23506.0"
CC_VERS_NUM = 140
!ELSEIF "$(_NMAKE_VER)" == "14.00.23918.0"
CC_VERS_NUM = 140
!ELSE
!  MESSAGE Unknown value for _NMAKE_VER macro: "$(_NMAKE_VER)"
!  MESSAGE Please, report this condition on the c-ares development
!  MESSAGE mailing list: http://cool.haxx.se/mailman/listinfo/c-ares/
!  ERROR   See previous message.
!ENDIF

CC_VERS_STR = msvc$(CC_VERS_NUM)
