// license:BSD-3-Clause
// copyright-holders:Roberto Fresca
/***************************************************************************************

  NOTE CHANCE
  Banpresto, 1995

  Driver by Roberto Fresca.

  System type:       Screenless prize machine.
  Manufacturer:      BANDAI NAMCO Entertainment (Banpresto Label).
  Release:           1995.
  Number of players: 1 (single player).

  Reference video: https://www.youtube.com/watch?v=TSIWO75udL8

****************************************************************************************

  Hardware Notes...

  Board etched PT-877.

  CPU:
  1x TOSHIBA TMPZ84C00AP-6 (Z80).

  Sound Device:
  1x OKI6295 or similar...

  ROM:
  1x 27C040 (SND ROM).
  1x 27C256 (PRG ROM).

  RAM:
  1x BR6265A-10LL (8K x 8 CMOS SRAM).

  Backup System:
  1x Fujitsu MB3780A (Battery Backup IC)
  1x Unknown battery.

  Clock:
  1x Xtal: 8.44800 MHz.

  Output:
  1x TD62309P (six high-current sink drivers)

  Other:
  1x 8-DIP switches bank.
  1x volume pot.
  1x 60-pins female connector. (CN2: 3 rows of 21, 18, 21)
  1x 10-pins male connector (CN1: for power supply)


  CN1 connector:

  01- DC +12V.
  02- GND
  03- DC +12V.
  04- GND
  05- DC +5V.
  06- GND
  07-
  08- ACFAIL
  09- DC 12V
  10- GND


****************************************************************************************

  Specs...

  Cab Size: 470 mm x 450 mm x 1350 mm.
  Weight:   45 Kg.
  Voltage:  AC 90/110 V., 50/60 Hz.
  Power:    30 W.


****************************************************************************************

  Samples:

  The waveform is ADPCM 4-bit mono, 8000 Hz.
  There are two banks. The sampleset has sounds, music and voices
  at the following rom offsets:

  Bank #01 (00000-3FFFF)

  $000400-$0013B2:    Sample #1-01    FX sound: 'cling' (credits).
  $0013B3-$0090B1:    Sample #1-02    music #1.
  $0090B2-$00DD8D:    Sample #1-03    voice: unknown.
  $00DD8E-$00EF2F:    Sample #1-04    voice: unknown.
  $00EF30-$0101D0:    Sample #1-05    voice: unknown.
  $0101D1-$011713:    Sample #1-06    voice: unknown.
  $011714-$0129FF:    Sample #1-07    voice: unknown.
  $012A00-$014136:    Sample #1-08    voice: unknown.
  $014137-$015B57:    Sample #1-09    voice: unknown.
  $015B58-$018E0E:    Sample #1-10    voice: unknown.
  $018E0F-$01BB61:    Sample #1-11    voice: unknown.
  $01BB62-$01F25C:    Sample #1-12    voice: unknown.
  $01F25D-$01FA35:    Sample #1-13    voice: unknown.
  $01FA36-$020372:    Sample #1-14    voice: unknown.
  $020373-$0227E2:    Sample #1-15    voice: unknown.
  $0227E3-$023E8D:    Sample #1-16    voice: unknown.
  $023E8E-$026FF7:    Sample #1-17    music #2
  $026FF8-$02A649:    Sample #1-18    music #3
  $02A64A-$02D8E9:    Sample #1-19    music #4
  $02D8EA-$02E635:    Sample #1-20    FX sound: 'boing' (start).
  $02E636-$02FFB6:    Sample #1-21    voice: unknown.
  $02FFB7-$03171E:    Sample #1-22    voice: unknown.
  $03171F-$031EC9:    Sample #1-23    voice: unknown.
  $031ECA-$032A0D:    Sample #1-24    voice: unknown.
  $032A0E-$0336E2:    Sample #1-25    voice: unknown.
  $0336E3-$034748:    Sample #1-26    voice: unknown.
  $034749-$03523C:    Sample #1-27    voice: unknown.
  $03523D-$035B00:    Sample #1-28    voice: unknown.
  $035B01-$03BBE9:    Sample #1-29    music #5
  $03BBEA-$03E9E1:    Sample #1-30    voice: unknown.
  $03E9E2-$03F872:    Sample #1-31    voice: unknown.

  Bank #02 (40000-7FFFF)

  $000400-$0013B2:    Sample #2-01    FX sound: 'cling' (credits).
  $0013B3-$001B81:    Sample #2-02    FX sound.
  $001B82-$0035CA:    Sample #2-03    voice: unknown.
  $0035CB-$003D99:    Sample #2-04    FX sound.
  $003D9A-$004C09:    Sample #2-05    voice: unknown.
  $004C0A-$004ED7:    Sample #2-06    FX sound.
  $004ED8-$0050CD:    Sample #2-07    FX sound.
  $0050CE-$005DC9:    Sample #2-08    voice: unknown.
  $005DCA-$00729A:    Sample #2-09    voice: unknown.
  $00729B-$008A02:    Sample #2-10    voice: unknown.
  $008A03-$00974E:    Sample #2-11    FX sound: 'boing' (start).
  $00974F-$009E5E:    Sample #2-12    voice: unknown.
  $009E5F-$00D476:    Sample #2-13    music #6
  $00D477-$00F156:    Sample #2-14    music #7
  $00F157-$00F90A:    Sample #2-15    voice: unknown.
  $00F90B-$011032:    Sample #2-16    voice: unknown.
  $011033-$01194B:    Sample #2-17    voice: unknown.
  $01194C-$012E94:    Sample #2-18    voice: unknown.
  $012E95-$01429D:    Sample #2-19    voice: unknown.
  $01429E-$015D2E:    Sample #2-20    music #8. (won game)
  $015D2F-$0194AE:    Sample #2-21    FX sound.
  $0194AF-$01B0FE:    Sample #2-22    voice: unknown.
  $01B0FF-$01D362:    Sample #2-23    voice: unknown.
  $01D363-$020087:    Sample #2-24    voice: unknown.
  $020088-$02305F:    Sample #2-25    voice: unknown.
  $023060-$025F98:    Sample #2-26    voice: unknown.
  $025F99-$027EE0:    Sample #2-27    FX sound.
  $027EE1-$029B08:    Sample #2-28    music #9
  $029B09-$02C6CF:    Sample #2-29    music #10. (lost game)
  $02C6D0-$02E370:    Sample #2-30    voice: unknown.
  $02E371-$030EDE:    Sample #2-31    voice: unknown.
  $030EDF-$0333F8:    Sample #2-32    voice: unknown.


****************************************************************************************

  Technical info:


  Error codes:

  E0 - PCB error, check ROM/RAM.
  E1 - Home position sensor error.
  E2 - Output sensor error.
  C0 - Freebie / Giveaway (??).


  DIP Switches:

  +-----------------------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | DIP SWITCHES BANK                 |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | COINAGE      | 1 CREDIT / 1 COIN  | OFF | OFF |     |     |     |     |     |     |
  |              | 1 CREDIT / 2 COINS | ON  | OFF |     |     |     |     |     |     |
  |              | 1 CREDIT / 3 COINS | OFF | ON  |     |     |     |     |     |     |
  |              | 1 CREDIT / 4 COINS | ON  | ON  |     |     |     |     |     |     |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | PAYOUT RATE  | 40%                |     |     | OFF | OFF |     |     |     |     |
  |              | 50%                |     |     | ON  | OFF |     |     |     |     |
  |              | 60%                |     |     | OFF | ON  |     |     |     |     |
  |              | 70%                |     |     | ON  | ON  |     |     |     |     |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | PLAYS PER    | 1 CREDIT / 3 PLAYS |     |     |     |     | OFF |     |     |     |
  | CREDIT       | 1 CREDIT / 2 PLAYS |     |     |     |     | ON  |     |     |     |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | PAYOUT RATE  | AS CONFIGURED      |     |     |     |     |     | OFF |     |     |
  | MULTIPLIER   | DOUBLE CONFIGURED  |     |     |     |     |     | ON  |     |     |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | ATTRACT      | WITH SOUND OUTPUT  |     |     |     |     |     |     | OFF |     |
  | SOUND        | NO SOUND OUTPUT    |     |     |     |     |     |     | ON  |     |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | UNUSED       | LEAVE IT OFF       |     |     |     |     |     |     |     | OFF |
  +--------------+--------------------+-----+-----+-----+-----+-----+-----+-----+-----+
  | SETTING AS SHIPPED                | OFF | OFF | ON  | OFF | OFF | OFF | OFF | OFF |
  +-----------------------------------+-----+-----+-----+-----+-----+-----+-----+-----+


  Known Inputs:

  1x Start/Stop button.
  1x Coin-In (100Y)
  1x Prize Payout Detector (optical)
  1x Prizes Empty Sensor
  1x Home Position Sensor (optical)
  1x Service Switch (allows play without incrementing 100Y counter)
  1x Test Switch (used to enter test mode)


  Known Outputs:

  1x 7-seg LEDs for play count, error code, and test phase.
  1x Start/Stop Switch lamp.
  1x Prize payout lamp (arrow pointing to prize, blinks when wins).
  1x Prizes empty LED.
  2x Red panels (2 lamps each).
  2x Blue panels (2 lamps each).
  2x Yellow panels (2 lamps each).
  1x "Note Vendor" prize dispenser.
  1x Coin lockout.
  1x 100Y counter (counts 100Y coins).
  1x Prize counter (counts prizes paid out).


  Error codes:

  Letter and number displayed alternately on the play count display.

  C0 and prize out LED      Prizes out.
  E0                        PCB failure.
  E1                        Home position sensor failure.
  E2                        Output sensor failure.

-------------------------------------------------------------------

  Test mode.

  Enter by pressing test switch.
  Test switch moves to next.
  Start switch moves to previous.

  1. Game count display test.
     * press/hold service to increment displayed digit.

  2. Lamp/LED test.
    * press/hold sevice to step through lamps/LEDs in order:
      - Start/stop switch.
      - Prize payout lamp.
      - Prizes empty LED.
      - Left upper row 1.
      - Left upper row 2.
      - Middle upper row 1.
      - Middle upper row 2.
      - Right upper row 1.
      - Right upper row 2.
      - Left lower row 1.
      - Left lower row 2.
      - Middle lower row 1.
      - Middle lower row 2.
      - Right lower row 1.
      - Right lower row 2.
      - All lamps/LEDs off.

  3. Sensor/switch test.
    * start/stop switch         -> start switch lamp        on=lit, off=unlit
    * coin detector             -> left lower row 1         on=lit, off=unlit
    * prize payout detector     -> left upper row 1         interrupted=lit, continuous=unlit
    * prizes empty              -> middle upper row 1       on=lit, off=unlit
    * home position             -> right upper row 1        interrupted=lit, continuous=unlit

  4. Audio output test.

  5. Payout mechanism test.
    * dispenses one prize each time service swith is pressed.
    * dispenses prizes while start/stop is held.
    * counts prizes dispensed and shows sensor state on lamps (as for sensor/switch test).

  6. Coin mechanism test.
    * service switch actuates coin lockout.
    * counts/plays sound for coins.
    * shows coin detector state on lamp (as for sensor/swtich test).

  7. DIP SW1..SW4 confirmation.
    * SW1 -> left upper row 1.
    * SW2 -> middle upper row 1.
    * SW3 -> left lower row 1.
    * SW4 -> middle lower row 1.

  8. DIP SW5..SW8 confirmation.
    * SW5 -> left upper row 1.
    * SW6 -> middle upper row 1.
    * SW7 -> left lower row 1.
    * SW8 -> middle lower row 1.


***************************************************************************************/

#include "emu.h"
#include "cpu/z80/z80.h"
#include "sound/okim6295.h"
#include "speaker.h"

#include "notechan.lh"


#define MASTER_CLOCK     XTAL_8_448MHz
#define CPU_CLOCK        MASTER_CLOCK / 2    // guess... not verified
#define SND_CLOCK        MASTER_CLOCK / 8    // guess... not verified


class notechan_state : public driver_device
{
public:
	notechan_state(const machine_config &mconfig, device_type type, const char *tag)
		: driver_device(mconfig, type, tag),
		m_maincpu(*this, "maincpu"),
		m_oki(*this, "oki") { }

	required_device<cpu_device> m_maincpu;
	required_device<okim6295_device> m_oki;

	DECLARE_WRITE8_MEMBER(out_f8_w);
	DECLARE_WRITE8_MEMBER(out_f9_w);
	DECLARE_WRITE8_MEMBER(out_fa_w);
	DECLARE_WRITE8_MEMBER(out_ff_w);
};


/*********************************************
*           Memory Map Definition            *
*********************************************/

static ADDRESS_MAP_START( notechan_map, AS_PROGRAM, 8, notechan_state )
	AM_RANGE(0x0000, 0x7fff) AM_ROM
	AM_RANGE(0xa000, 0xbfff) AM_RAM
ADDRESS_MAP_END

static ADDRESS_MAP_START( notechan_port_map, AS_IO, 8, notechan_state )
	ADDRESS_MAP_GLOBAL_MASK(0xff)
	AM_RANGE(0xf0, 0xf0) AM_DEVREADWRITE("oki", okim6295_device, read, write)
	AM_RANGE(0xf8, 0xf8) AM_READ_PORT("IN0") AM_WRITE(out_f8_w)
	AM_RANGE(0xf9, 0xf9) AM_READ_PORT("IN1") AM_WRITE(out_f9_w)
	AM_RANGE(0xfa, 0xfa) AM_READ_PORT("IN2") AM_WRITE(out_fa_w)
	AM_RANGE(0xfb, 0xfb) AM_READ_PORT("IN3")
	AM_RANGE(0xff, 0xff) AM_WRITE(out_ff_w)  // watchdog reset? (written immediately upon reset, INT and NMI)
ADDRESS_MAP_END


/*********************************************
*           Output Ports / Lamps             *
*********************************************/

WRITE8_MEMBER(notechan_state::out_f8_w)
{
	output().set_lamp_value(0, data & 1 );
	output().set_lamp_value(1, data >> 1 & 1);
	output().set_lamp_value(2, data >> 2 & 1);
	output().set_lamp_value(3, data >> 3 & 1);
	output().set_lamp_value(4, data >> 4 & 1);
	output().set_lamp_value(5, data >> 5 & 1);
	output().set_lamp_value(6, data >> 6 & 1);
	output().set_lamp_value(7, data >> 7 & 1);

	logerror("Output %02X to $F8\n", data);
}

WRITE8_MEMBER(notechan_state::out_f9_w)
{
	output().set_lamp_value(8, data & 1 );
	output().set_lamp_value(9, data >> 1 & 1);
	output().set_lamp_value(10, data >> 2 & 1);
	output().set_lamp_value(11, data >> 3 & 1);
	output().set_lamp_value(12, data >> 4 & 1);
	output().set_lamp_value(13, data >> 5 & 1);
	output().set_lamp_value(14, data >> 6 & 1);
	output().set_lamp_value(15, data >> 7 & 1);

	logerror("Output %02X to $F9\n", data);
}

WRITE8_MEMBER(notechan_state::out_fa_w)
{
	m_oki->set_rom_bank(BIT(data, 5));

	output().set_lamp_value(16, data & 1 );
	output().set_lamp_value(17, data >> 1 & 1);
	output().set_lamp_value(18, data >> 2 & 1);
	output().set_lamp_value(19, data >> 3 & 1);
	output().set_lamp_value(20, data >> 4 & 1);
	output().set_lamp_value(21, data >> 5 & 1);
	output().set_lamp_value(22, data >> 6 & 1);
	output().set_lamp_value(23, data >> 7 & 1);

	logerror("Output %02X to $FA\n", data);
}

WRITE8_MEMBER(notechan_state::out_ff_w)
{
	output().set_lamp_value(24, data & 1 );
	output().set_lamp_value(25, data >> 1 & 1);
	output().set_lamp_value(26, data >> 2 & 1);
	output().set_lamp_value(27, data >> 3 & 1);
	output().set_lamp_value(28, data >> 4 & 1);
	output().set_lamp_value(29, data >> 5 & 1);
	output().set_lamp_value(30, data >> 6 & 1);
	output().set_lamp_value(31, data >> 7 & 1);

	logerror("Output %02X to $FF\n", data);
}


/*********************************************
*          Input Ports Definitions           *
*********************************************/

static INPUT_PORTS_START( notechan )
	PORT_START("IN0")  // Port F8h
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-1") PORT_CODE(KEYCODE_1)
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-2") PORT_CODE(KEYCODE_2)
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-3") PORT_CODE(KEYCODE_3)
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-4") PORT_CODE(KEYCODE_4)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-5") PORT_CODE(KEYCODE_5)
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-6") PORT_CODE(KEYCODE_6)
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-7") PORT_CODE(KEYCODE_7)
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("0-8") PORT_CODE(KEYCODE_8)

	PORT_START("IN1")  // Port F9h
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("1-5") PORT_CODE(KEYCODE_T)
	PORT_BIT( 0xef, IP_ACTIVE_LOW, IPT_UNUSED )

	PORT_START("IN2")  // Port FAh
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-1") PORT_CODE(KEYCODE_A)  // Note (1)
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-2") PORT_CODE(KEYCODE_S)  // Note (2)
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-3") PORT_CODE(KEYCODE_D)  // Note (3)
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-4") PORT_CODE(KEYCODE_F)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-5") PORT_CODE(KEYCODE_G)
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-6") PORT_CODE(KEYCODE_H)
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-7") PORT_CODE(KEYCODE_J)
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("2-8") PORT_CODE(KEYCODE_K)

	PORT_START("IN3")  // Port FBh
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-1") PORT_CODE(KEYCODE_Z)
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-2") PORT_CODE(KEYCODE_X)
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-3") PORT_CODE(KEYCODE_C)
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-4") PORT_CODE(KEYCODE_V)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-5") PORT_CODE(KEYCODE_B)
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-6") PORT_CODE(KEYCODE_N)
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-7") PORT_CODE(KEYCODE_M)
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_NAME("3-8") PORT_CODE(KEYCODE_L)

/*
  Inputs notes...

  Port FAh:

  (1) Pulsed under reset, activates port FAh-D5 (lamp 21) and triggers sample #20 (boing
      or FX sound, depending of the OKI bank). Maybe it's the 'start' button.

  (2) Pulsing and keep pressed under reset, triggers the sample #01 (cling) and starts
      a sequence of 4-lines output through port FFh D3-D2-D1-D0 (lamps 27-26-25-24)
      that seems a 4-bits countdown (from 8 to 0) maybe related to the 7segment LEDs
      credits counter). Then triggers sample #04 (voice or effect depending of the OKI
      bank). After a little while also triggers sample #05 (voice).
      Maybe it's some kind of hardware testing mode or boot sequence...

  (3) Pulsing this input activates port FAh-D1 (lamp 17) and triggers sample #01 (cling).
      Maybe it's the 'coin-in' button.

*/
	PORT_START("DSW")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


/*********************************************
*               Machine Config               *
*********************************************/

static MACHINE_CONFIG_START( notechan )
	/* basic machine hardware */
	MCFG_CPU_ADD("maincpu", Z80, CPU_CLOCK)  // unknown...
	MCFG_CPU_PROGRAM_MAP(notechan_map)
	MCFG_CPU_IO_MAP(notechan_port_map)
	MCFG_CPU_PERIODIC_INT_DRIVER(driver_device, irq0_line_hold, 60)

	/* NO VIDEO */

	/* sound hardware */
	MCFG_SPEAKER_STANDARD_MONO("speaker")

	MCFG_OKIM6295_ADD("oki", SND_CLOCK, PIN7_HIGH)  // match the real sounds
	MCFG_SOUND_ROUTE(ALL_OUTPUTS, "speaker", 1.0)
MACHINE_CONFIG_END


/*********************************************
*                  Rom Load                  *
*********************************************/

ROM_START( notechan )
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD( "p-650_p1_ver1.10.ic15",  0x0000, 0x8000, CRC(f4878009) SHA1(e8b7f4d84a8995f60d59fe9f4b25e2d1babcf923) )

	ROM_REGION( 0x80000, "oki", 0 ) /* Audio ADPCM */
	ROM_LOAD( "p-650_s1_ver1.00.ic21",  0x0000, 0x80000, CRC(1b8c835b) SHA1(73749c0077605f9ad56e9dd73b60ee04fe54eb73) )
ROM_END


/*********************************************
*                Game Drivers                *
*********************************************/

//     YEAR  NAME      PARENT  MACHINE   INPUT     STATE           INIT  ROT    COMPANY      FULLNAME      FLAGS                 LAYOUT
GAMEL( 1995, notechan, 0,      notechan, notechan, notechan_state, 0,    ROT0, "Banpresto", "Note Chance", MACHINE_NOT_WORKING,  layout_notechan )
