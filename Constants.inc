
;;;;;;;;;;;;;;;;;;
;;  directions for facing and keys

RIGHT             = $01
LEFT              = $02
DOWN              = $04
UP                = $08
BTN_START         = $10

;;;;;;;;;;;;;;;;;;
;;  music channels
;; JIGS - moving this up $10 bytes to fit 2 more channels of data in.
;; Further channel variables are stores in MMC5 exram... somehow

CHAN_START        = $A0 ; originally $B0
CHAN_BYTES        = $10 

CHAN_SQ1          = CHAN_START
CHAN_SQ2          = CHAN_START + CHAN_BYTES
CHAN_TRI          = CHAN_START + (2 * CHAN_BYTES)
;; JIGS - for the MMC5 square channels
CHAN_SQ3          = CHAN_START + (3 * CHAN_BYTES)
CHAN_SQ4          = CHAN_START + (4 * CHAN_BYTES)
CHAN_STOP         = CHAN_START + (5 * CHAN_BYTES)

;;;;;;;;;;;;;;;;;;
;; ch_stat locations in save games

SaveScreenChar1  = sram+$100
SaveScreenChar2  = sram+$140
SaveScreenChar3  = sram+$180
SaveScreenChar4  = sram+$1C0
SaveScreenChar5  = sram2+$100
SaveScreenChar6  = sram2+$140
SaveScreenChar7  = sram2+$180
SaveScreenChar8  = sram2+$1C0
SaveScreenChar9  = sram3+$100
SaveScreenChar10 = sram3+$140
SaveScreenChar11 = sram3+$180
SaveScreenChar12 = sram3+$1C0


;;;;;;;;;;;;;;;;;;
;;  enemy categories
CATEGORY_UNKNOWN     = $01
CATEGORY_DRAGON      = $02
CATEGORY_GIANT       = $04
CATEGORY_UNDEAD      = $08
CATEGORY_WERE        = $10
CATEGORY_WATER       = $20
CATEGORY_MAGE        = $40
CATEGORY_REGEN       = $80

;;;;;;;;;;;;;;;;;;
;;  enemy stats in ROM
ENROMSTAT_EXP        = $00       ; 2 bytes
ENROMSTAT_GP         = $02       ; 2 bytes
ENROMSTAT_HPMAX      = $04       ; 2 bytes
ENROMSTAT_MORALE     = $06
ENROMSTAT_AI         = $07
ENROMSTAT_EVADE      = $08
ENROMSTAT_ABSORB     = $09
ENROMSTAT_NUMHITS    = $0A
ENROMSTAT_HITRATE    = $0B
ENROMSTAT_DAMAGE     = $0C
ENROMSTAT_CRITRATE   = $0D
ENROMSTAT_SPECIAL    = $0E
ENROMSTAT_ATTACKAIL  = $0F
ENROMSTAT_CATEGORY   = $10
ENROMSTAT_MAGDEF     = $11
ENROMSTAT_ELEMWEAK   = $12
ENROMSTAT_ELEMRESIST = $13
ENROMSTAT_ITEM       = $14

;;;;;;;;;;;;;;;;;;;
;;  magic data in ROM
MAGDATA_HITRATE      = $00
MAGDATA_EFFECTIVITY  = $01
MAGDATA_ELEMENT      = $02
MAGDATA_TARGET       = $03   ; (01 = All enemies, 02 = One Enemy, 04 = Spell Caster, 08 = Whole Party, 10 = One party member)
MAGDATA_EFFECT       = $04
MAGDATA_GRAPHIC      = $05
MAGDATA_PALETTE      = $06
MAGDATA_UNUSED       = $07


;;;;;;;;;;;;;;;;;;
;;  banks to swap to for different things
;;

BANK_TALKTOOBJ    = $10
BANK_MENUS        = $0E
BANK_TITLE        = $0F ;0E
BANK_INTRO        = $0F ;0E
BANK_PARTYGEN     = $0E
BANK_MUSIC        = $0D
BANK_EQUIPSTATS   = $0C
BANK_BTLPALETTES  = $0C
BANK_BATTLE       = $0B
BANK_BTLDATA      = $0B
BANK_DOMAINS      = $0B
BANK_ENEMYNAMES   = $0B
BANK_BTLMESSAGES  = $0A ;0B 
BANK_MINIMAP      = $09
BANK_MENUCHR      = $09
BANK_BATTLECHR    = $07
BANK_STANDARDMAPS = $04   ; used with ORA, so low 2 bits of bank number must be clear
BANK_TILESETCHR   = $03
BANK_MAPCHR       = $02
BANK_OWMAP        = $01
BANK_OBJINFO      = $00
BANK_MAPMANPAL    = $00
BANK_OWINFO       = $00
BANK_SMINFO       = $00
BANK_TREASURE     = $00
BANK_TELEPORTINFO = $00
BANK_STARTUPINFO  = $00
BANK_STARTINGSTATS= $00

BANK_ORBCHR       = $0D
BANK_BTLCHR       = $09
BANK_BACKDROPPAL  = $00

BANK_ITEMPRICES   = $0A ; JIGS - originally $0D
BANK_MINIGAME     = $0D
BANK_BRIDGESCENE  = $0D
BANK_ENDINGSCENE  = $0D
BANK_INTROTEXT    = $0D

BANK_BRIDGEGFX    = $0B
BANK_EPILOGUEGFX  = $0B

BANK_DIALOGUE     = $10 ; JIGS - originally $0A
BANK_ITEMS        = $0A ; JIGS - originally (why must it be shared?) BANK_DIALOGUE  ; must be shared

BANK_Z            = $0F

;;;;;;;;;;;;;;;;;;
;;  Special Standard Map tile IDs
;;

MAPTILE_CLOSEDDOOR = $36    ; tiles used for door graphics (for runtime changes to the map -- when you 
MAPTILE_OPENDOOR   = $37    ;   enter/exit rooms)
MAPTILE_LOCKEDDOOR = $3B

;;;;;;;;;;;;;;;;;;
;;  game flag bits

GMFLG_OBJVISIBLE   = %00000001    ; must be low bit (often shifted out)
GMFLG_EVENT        = %00000010    ; must be bit 1 (shifted out)
GMFLG_TCOPEN       = %00000100


;;;;;;;;;;;;;;;;;;
;;  battle formation IDs

BTL_VAMPIRE        = $7C
BTL_ASTOS          = $7D
BTL_BIKKE          = $7E
BTL_GARLAND        = $7F

;;;;;;;;;;;;;;;;;;
;;  battle message IDs  (1-based)

;BTLMSG_HPUP             = $01
;BTLMSG_ASLEEP           = $04

;BTLMSG_SIGHTRECOVERED   = $06   ; is this ever used?
;BTLMSG_SILENCED         = $07

;BTLMSG_DARKNESS         = $09

;BTLMSG_NEUTRALIZED      = $0E

;BTLMSG_BREAKSILENCE     = $11   ; is this ever used??

;BTLMSG_CONFUSED         = $13
;BTLMSG_POISONED         = $14

;BTLMSG_PARALYZED_A      = $17

;BTLMSG_BROKENTOPIECES   = $1A

;BTLMSG_SLAIN            = $20
;BTLMSG_INEFFECTIVE      = $21
;BTLMSG_STRIKEFIRST      = $22
;BTLMSG_SURPRISED        = $23
;BTLMSG_CANTRUN          = $24
;BTLMSG_RUNAWAY          = $25
;BTLMSG_CLOSECALL        = $26
;BTLMSG_WOKEUP           = $27
;BTLMSG_SLEEPING         = $28
;BTLMSG_CURED            = $29
;BTLMSG_PARALYZED_B      = $2A
;BTLMSG_HITS             = $2B
;BTLMSG_CRITICALHIT      = $2C

;BTLMSG_DMG              = $2E
;BTLMSG_STOPPED          = $2F

;BTLMSG_STR              = $33
;BTLMSG_AGI              = $34
;BTLMSG_INT              = $35
;BTLMSG_VIT              = $36
;BTLMSG_LUCK             = $37
;BTLMSG_UP               = $38

;BTLMSG_TERMINATED       = $3F
;BTLMSG_MISSED           = $40

;BTLMSG_INEFFECTIVENOW   = $4A

;BTLMSG_NOTHINGHAPPENS   = $4E

;; JIGS - this list was unfinished. The full range of options are:

BTLMSG_HPUP             = $01 ; HP up!
BTLMSG_ARMORUP          = $02 ; Armor up
BTLMSG_EASYTODODGE      = $03 ; Easy to dodge
BTLMSG_ASLEEP           = $04 ; Asleep
BTLMSG_EASYTOHIT        = $05 ; Easy to hit
BTLMSG_SIGHTRECOVERED   = $06 ; Sight recovered
BTLMSG_SILENCED         = $07 ; Silenced
BTLMSG_DEFENDLIGHTNING  = $08 ; Defend lightning
BTLMSG_DARKNESS         = $09 ; Darkness
BTLMSG_WEAPONSSTRONGER  = $0A ; Weapons stronger
BTLMSG_LOSTINTELLIGENCE = $0B ; Lost intelligence
BTLMSG_DEFENDFIRE       = $0C ; Defend fire
BTLMSG_ATTACKHALTED     = $0D ; Attack halted
BTLMSG_NEUTRALIZED      = $0E ; Neutralized
BTLMSG_BECAMETERRIFIED  = $0F ; Became terrified
BTLMSG_DEFENDCOLD       = $10 ; Defend cold
BTLMSG_BREAKSILENCE     = $11 ; Break the silence
BTLMSG_QUICKSHOT        = $12 ; Quick shot
BTLMSG_CONFUSED         = $13 ; Confused
BTLMSG_POISONED         = $14 ; Poisoned
BTLMSG_ERASED           = $15 ; Erased
BTLMSG_FELLINTOCRACK	= $16 ; Fell into crack
BTLMSG_PARALYZED_A      = $17 ; Paralyzed
BTLMSG_HPMAX_1          = $18 ; HP max!
BTLMSG_DEFENDMAGIC      = $19 ; Defend magic
BTLMSG_BROKENTOPIECES   = $1A ; Broken into pieces
BTLMSG_WEAPONENCHANTED  = $1B ; Weapon became enchanted
BTLMSG_DEFENDALL        = $1C ; Defend all
BTLMSG_DEFENSELESS      = $1D ; Defenseless
BTLMSG_TIMESTOPPED      = $1E ; Time stopped
BTLMSG_EXILETO4TH       = $1F ; Exile to 4th dimension
BTLMSG_SLAIN            = $20 ; Slain..
BTLMSG_INEFFECTIVE      = $21 ; Ineffective
BTLMSG_STRIKEFIRST      = $22 ; Chance to strike first
BTLMSG_SURPRISED        = $23 ; Monsters strike first
BTLMSG_CANTRUN          = $24 ; Can't run
BTLMSG_RUNAWAY          = $25 ; Run away
BTLMSG_CLOSECALL        = $26 ; Close call....
BTLMSG_WOKEUP           = $27 ; Woke up
BTLMSG_SLEEPING         = $28 ; Sleeping
BTLMSG_CURED            = $29 ; Cured!
BTLMSG_PARALYZED_B      = $2A ; Paralyzed
BTLMSG_HITS             = $2B ; Hits!___
BTLMSG_CRITICALHIT      = $2C ; Critical hit!!
BTLMSG_MAGICBLOCKED     = $2D ; Magic blocked
BTLMSG_DMG              = $2E ; DMG
BTLMSG_STOPPED          = $2F ; Stopped
BTLMSG_LEVUP            = $30 ; Lev. up!
BTLMSG_HPMAX_2          = $31 ; HP max
BTLMSG_PTS              = $32 ; pts.
BTLMSG_STR              = $33 ; Str.
BTLMSG_AGI              = $34 ; Agi.
BTLMSG_INT              = $35 ; Int.
BTLMSG_VIT              = $36 ; Vit.
BTLMSG_LUCK             = $37 ; Luck
BTLMSG_UP               = $38 ;  up
BTLMSG_BLANK1           = $39 ; 
BTLMSG_BLANK2           = $3A ; 
BTLMSG_DOWN             = $3B ; down
BTLMSG_PERISHED         = $3C ; perished
BTLMSG_MONSTERS         = $3D ; Monsters_
BTLMSG_PARTY            = $3E ; _party_
BTLMSG_TERMINATED       = $3F ; Terminated
BTLMSG_MISSED           = $40 ; Missed! 
BTLMSG_FOURSPACES       = $41 ; ____
BTLMSG_STONETEXT        = $42 ; {E6}{E7}{E8}{E9} (Stone) ;; JIGS - the squished text doesn't exist anymore...
BTLMSG_POISONTEXT       = $43 ; {E2}{E3}{E4}{E5} (Poison) ;; JIGS - the squished text doesn't exist anymore...
BTLMSG_DARK             = $44 ; Dark
BTLMSG_STUN             = $45 ; Stun
BTLMSG_SLEEPTEXT        = $46 ; A {EA}{C8}{C9} (sl eep) ;; JIGS - the squished text doesn't exist anymore...
BTLMSG_MUTE             = $47 ; Mute
BTLMSG_HP               = $48 ; HP__
BTLMSG_EXPUP            = $49 ; EXP up
BTLMSG_INEFFECTIVENOW   = $4A ; Ineffective now
BTLMSG_SILENCE          = $4B ; Silence
BTLMSG_GOMAD            = $4C ; Go mad
BTLMSG_POISONSMOKE      = $4D ; Poison smoke
BTLMSG_NOTHINGHAPPENS   = $4E ; Nothing happens
; JIGS - adding these:
BTLMSG_BLANK3           = $4F ; 
BTLMSG_REGEN            = $50 ; Regenerated HP ;; JIGS - added this
BTLMSG_STOLEGOLD        = $51 ; Stole gold! ;; JIGS - added this

;;;;;;;;;;;;;;;;;;
;;  Alternative battle message IDs
;;    For whatever reason, the game has a routine where it runs an ID through a LUT
;;  to get a different ID.  Don't ask me why.
;;
;;  These are zero-based and are used exclusively with ShowAltBattleMessage in bank C.
;;  See that routine for more info.
ALTBTLMSG_RUNAWAY           = $00
ALTBTLMSG_PARALYZED_B       = $01
ALTBTLMSG_SLEEPING          = $02
ALTBTLMSG_SILENCED_1        = $03
ALTBTLMSG_INEFFECTIVE       = $04
ALTBTLMSG_CONFUSED          = $05       ; ALTBTLMSG_CONFUSED through ALTBTLMSG_BROKENTOPIECES
ALTBTLMSG_SILENCED_2        = $06       ;   must be in sequential order, as they are used programmatically.
ALTBTLMSG_ASLEEP            = $07       ;   They are the messages printed when an ailment is inflicted.
ALTBTLMSG_PARALYZED_A       = $08
ALTBTLMSG_DARKNESS          = $09
ALTBTLMSG_POISONED          = $0A
ALTBTLMSG_BROKENTOPIECES    = $0B
ALTBTLMSG_TERMINATED        = $0C
ALTBTLMSG_CURED_1           = $0D       ; Same deal as ALTBTLMSG_CONFUSED -- these are printed when
ALTBTLMSG_BREAKSILENCE      = $0E       ;   their matching ailment is cured
ALTBTLMSG_WOKEUP            = $0F
ALTBTLMSG_CURED_2           = $10
ALTBTLMSG_SIGHTRECOVERED    = $11
ALTBTLMSG_NEUTRALIZED       = $12
ALTBTLMSG_INEFFECTIVENOW    = $13       ; <- message for curing Stone - you cannot cure stone in battle
ALTBTLMSG_SLAIN             = $14
ALTBTLMSG_NOTHINGHAPPENS    = $15

;;;;;;;;;;;;;;;;;;
;;  normal teleport IDs

NORMTELE_SAVEDPRINCESS = $3F

;;;;;;;;;;;;;;;;;;
;;  misc crap

WPNID_XCALBUR      = $27

;;;;;;;;;;;;;;;;;;
;;  ailments
AIL_DEAD            = $01
AIL_STONE           = $02
AIL_POISON          = $04
AIL_DARK            = $08
AIL_STUN            = $10
AIL_SLEEP           = $20
AIL_MUTE            = $40
AIL_CONF            = $80


;;;;;;;;;;;;;;;;;;
;;  map object IDs
;;

OBJID_GARLAND      = $02   ; Garland (the first one, not ToFR)
OBJID_PRINCESS_1   = $03   ; kidnapped princess (in ToF)
OBJID_BIKKE        = $04   ; Bikke the Pirate
OBJID_ELFPRINCE    = $06   ; Elf Prince (sleeping man-beauty)
OBJID_ASTOS        = $07   ; Astos -- the dark king!  omg scarey
OBJID_NERRICK      = $08   ; Nerrick -- the dwarf working on the canal
OBJID_SMITH        = $09   ; Smith, the dwarven blacksmith (no, he's not Watts)
OBJID_MATOYA       = $0A
OBJID_UNNE         = $0B   ; you've never heard of him?
OBJID_VAMPIRE      = $0C   ; Earth Cave's Vampire
OBJID_SARDA        = $0D
OBJID_BAHAMUT      = $0E   ; Bahamut
OBJID_SUBENGINEER  = $10   ; Submarine Engineer (blocking Sea Shrine in Onrac)
OBJID_PRINCESS_2   = $12   ; rescued princess (in Coneria Castle)
OBJID_FAIRY        = $13   ; fairy that appears from the bottle
OBJID_TITAN        = $14   ; Titan in Titan's Tunnel
OBJID_RODPLATE     = $16   ; plate that is removed with the Rod
OBJID_LUTEPLATE    = $17   ; plate that is removed with the Lute

OBJID_SKYWAR_FIRST = $3A                   ; start of the 5 sky warriors
OBJID_SKYWAR_LAST  = OBJID_SKYWAR_FIRST+4  ; last of the 5 sky warriors

OBJID_PIRATETERR_1 = $3F   ; townspeople that were terrorized by the
OBJID_PIRATETERR_2 = $40   ;   pirates... they don't become visible until after
OBJID_PIRATETERR_3 = $41   ;   you beat Bikke and claim the ship

OBJID_BAT          = $57   ; normal bat

OBJID_BLACKORB     = $CA

;;;;;;;;;;;;;;;;;;
;;  common dialogue IDs
;;

DLGID_NOTHING      = $00   ; "Nothing Here"
DLGID_DONTBEGREEDY = $3A   ; from Smith if you have too many weapons
DLGID_TCGET        = $F0   ; "In this chest you find..."
DLGID_CANTCARRY    = $F1   ; "You can't carry anymore"
DLGID_EMPTYTC      = $F2   ; "this treasure chest is empty"

;;;;;;;;;;;;;;;;;;
;;  treasure item type ranges
TCITYPE_ITEMSTART  = $00
TCITYPE_WEPSTART   = TCITYPE_ITEMSTART+$1C
TCITYPE_ARMSTART   = TCITYPE_WEPSTART+$28
TCITYPE_GPSTART    = TCITYPE_ARMSTART+$28


;;;;;;;;;;;;;;;;;;
;;  standard map tile properties

TP_SPEC_DOOR      = %00000010
TP_SPEC_LOCKED    = %00000100
TP_SPEC_CLOSEROOM = %00000110
TP_SPEC_TREASURE  = %00001000
TP_SPEC_BATTLE    = %00001010
TP_SPEC_DAMAGE    = %00001100
TP_SPEC_CROWN     = %00001110
TP_SPEC_CUBE      = %00010000
TP_SPEC_4ORBS     = %00010010
TP_SPEC_USEROD    = %00010100
TP_SPEC_USELUTE   = %00010110
TP_SPEC_EARTHORB  = %00011000
TP_SPEC_FIREORB   = %00011010
TP_SPEC_WATERORB  = %00011100
TP_SPEC_AIRORB    = %00011110

TP_SPEC_MASK      = %00011110


TP_TELE_EXIT      = %11000000   ; "exit" teleport (standard map to overworld map)
TP_TELE_NORM      = %10000000   ; "normal" teleport (standard map to standard map)
TP_TELE_WARP      = %01000000   ; "warp" teleport (go back to previous floor)
TP_TELE_NONE      = 0

TP_TELE_MASK      = %11000000

TP_NOTEXT_MASK    = %11000010   ; if any of these bits set, "Nothing Here" is forced when you talk to tile

TP_BATTLEMARKER   = %00100000
TP_NOMOVE         = %00000001

;;;;;;;;;;;;;;;;;;
;;  overworld map tile properties

OWTP_DOCKSHIP     = %00100000
OWTP_FOREST       = %00010000

OWTP_SPEC_CHIME   = %01000000
OWTP_SPEC_CARAVAN = %10000000
OWTP_SPEC_FLOATER = %11000000

OWTP_SPEC_MASK    = %11000000

;;;;;;;;;;;;;;;;;;
;;  "Poses" for the characters in battle
CHARPOSE_STAND      = $00
CHARPOSE_WALK       = $04
CHARPOSE_ATTACK_B   = $08
CHARPOSE_ATTACK_F   = $0C
CHARPOSE_CHEER      = $10
CHARPOSE_CHEER_2    = $14
CHARPOSE_CROUCH     = $18
CHARPOSE_CROUCH_2   = $1C


;;;;;;;;;;;;;;;;;;
;;  classes

CLS_FT  = $00
CLS_TH  = $01
CLS_BB  = $02
CLS_RM  = $03
CLS_WM  = $04
CLS_BM  = $05
CLS_KN  = $06
CLS_NJ  = $07
CLS_MA  = $08
CLS_RW  = $09
CLS_WW  = $0A
CLS_BW  = $0B




;;;;;;;;;;;;;;;;;;
;;  magic spells

MG_START = $B0
  MG_CURE = MG_START + $00
  MG_HARM = MG_START + $01
  MG_FOG  = MG_START + $02
  MG_RUSE = MG_START + $03
  MG_FIRE = MG_START + $04
  MG_SLEP = MG_START + $05
  MG_LOCK = MG_START + $06
  MG_LIT  = MG_START + $07
  MG_LAMP = MG_START + $08
  MG_MUTE = MG_START + $09
  MG_ALIT = MG_START + $0A
  MG_INVS = MG_START + $0B
  MG_ICE  = MG_START + $0C
  MG_DARK = MG_START + $0D
  MG_TMPR = MG_START + $0E
  MG_SLOW = MG_START + $0F
  MG_CUR2 = MG_START + $10
  MG_HRM2 = MG_START + $11
  MG_AFIR = MG_START + $12
  MG_HEAL = MG_START + $13
  MG_FIR2 = MG_START + $14
  MG_HOLD = MG_START + $15
  MG_LIT2 = MG_START + $16
  MG_LOK2 = MG_START + $17
  MG_PURE = MG_START + $18
  MG_FEAR = MG_START + $19
  MG_AICE = MG_START + $1A
  MG_AMUT = MG_START + $1B
  MG_SLP2 = MG_START + $1C
  MG_FAST = MG_START + $1D
  MG_CONF = MG_START + $1E
  MG_ICE2 = MG_START + $1F
  MG_CUR3 = MG_START + $20
  MG_LIFE = MG_START + $21
  MG_HRM3 = MG_START + $22
  MG_HEL2 = MG_START + $23
  MG_FIR3 = MG_START + $24
  MG_BANE = MG_START + $25
  MG_WARP = MG_START + $26
  MG_SLO2 = MG_START + $27
  MG_SOFT = MG_START + $28
  MG_EXIT = MG_START + $29
  MG_FOG2 = MG_START + $2A
  MG_INV2 = MG_START + $2B
  MG_LIT3 = MG_START + $2C
  MG_RUB  = MG_START + $2D
  MG_QAKE = MG_START + $2E
  MG_STUN = MG_START + $2F
  MG_CUR4 = MG_START + $30
  MG_HRM4 = MG_START + $31
  MG_ARUB = MG_START + $32
  MG_HEL3 = MG_START + $33
  MG_ICE3 = MG_START + $34
  MG_BRAK = MG_START + $35
  MG_SABR = MG_START + $36
  MG_BLND = MG_START + $37
  MG_LIF2 = MG_START + $38
  MG_FADE = MG_START + $39
  MG_WALL = MG_START + $3A
  MG_XFER = MG_START + $3B
  MG_NUKE = MG_START + $3C
  MG_STOP = MG_START + $3D
  MG_ZAP  = MG_START + $3E
  MG_XXXX = MG_START + $3F


;; labels that couldn't be inserted in data

lut_MapObjects     = $B400   ; BANK_OBJINFO -- must be on page
lut_MapObjGfx      = $AE00   ; BANK_OBJINFO
lut_MapObjCHR      = $A200   ; BANK_MAPCHR

lut_MapmanPalettes = $83A0   ; BANK_MAPMANPAL
lut_OWPtrTbl       = $8000   ; BANK_OWMAP
lut_SMPtrTbl       = $8000   ; BANK_STANDARDMAPS
lut_EnemyAttack    = $8000   ; original $B600   ; BANK_ITEMS
lut_ItemNamePtrTbl = $8100   ; original $B700   ; BANK_ITEMS
;; JIGS - Moved dialogue out of the start of this bank to its own bank.

lut_Domains        = $8000   ; BANK_DOMAINS -- MUST be on page boundary

;lut_ShopCHR        = $8000   ; BANK_MENUCHR
;; JIGS - this is defined in Bank 09

lut_BtlBackdrops   = $B300   ; BANK_OWINFO

;lut_OrbCHR         = $B600   ; BANK_ORBCHR
;; JIGS - this is defined in Bank D
lut_BatSprCHR      = $9000   ; BANK_BTLCHR -- page
lut_BatObjCHR      = $A800   ; BANK_BTLCHR -- page

lut_BackdropPal    = $B200   ; BANK_BACKDROPPAL

;lut_ItemPrices     = $BC00   ; BANK_ITEMPRICES - page -- ;; JIGS in Bank 0A now

lut_Weapons        = $8000   ; BANK_EQUIPSTATS - page
lut_Armor          = $8140   ; BANK_EQUIPSTATS
lut_OWTileset      = $8000   ; BANK_OWINFO - page

lut_DialoguePtrTbl = $8000   ; BANK_DIALOGUE

lut_SMTilesetAttr  = $8400   ; BANK_SMINFO - must be on $400 byte bound
lut_SMTilesetProp  = $8800   ; BANK_SMINFO - page
lut_SMTilesetTSA   = $9000   ; BANK_SMINFO - page
lut_SMPalettes     = $A000   ; BANK_SMINFO - $1000 byte bound

lut_Treasure       = $B100   ; BANK_TREASURE

lut_Tilesets       = $ACC0   ; BANK_TELEPORTINFO
lut_NormTele_X     = $AD00   ; BANK_TELEPORTINFO
lut_NormTele_Y     = $AD40   ; BANK_TELEPORTINFO
lut_NormTele_Map   = $AD80   ; BANK_TELEPORTINFO
lut_ExitTele_X     = $AC60   ; BANK_TELEPORTINFO
lut_ExitTele_Y     = $AC70   ; BANK_TELEPORTINFO
lut_EntrTele_X     = $AC00   ; BANK_TELEPORTINFO
lut_EntrTele_Y     = $AC20   ; BANK_TELEPORTINFO
lut_EntrTele_Map   = $AC40   ; BANK_TELEPORTINFO

lut_InitGameFlags       = $AF00 ; BANK_STARTUPINFO
lut_InitUnsramFirstPage = $B000 ; BANK_STARTUPINFO


lut_ClassStartingStats  = $B040 ; BANK_STARTINGSTATS
