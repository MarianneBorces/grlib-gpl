-- Technology and synthesis options
  constant CFG_FABTECH 	: integer := CONFIG_SYN_TECH;
  constant CFG_MEMTECH  : integer := CFG_RAM_TECH;
  constant CFG_PADTECH 	: integer := CFG_PAD_TECH;
  constant CFG_NOASYNC 	: integer := CONFIG_SYN_NO_ASYNC;

-- Clock generator
  constant CFG_CLKTECH 	: integer := CFG_CLK_TECH;
  constant CFG_CLKMUL   : integer := CONFIG_CLK_MUL;
  constant CFG_CLKDIV   : integer := CONFIG_CLK_DIV;
  constant CFG_PCIDLL   : integer := CONFIG_PCI_CLKDLL;
  constant CFG_PCISYSCLK: integer := CONFIG_PCI_SYSCLK;
  constant CFG_CLK_NOFB : integer := CONFIG_CLK_NOFB;

-- LEON3 processor core
  constant CFG_LEON3  	: integer := CONFIG_LEON3;
  constant CFG_NCPU 	: integer := CONFIG_PROC_NUM;
  constant CFG_NWIN 	: integer := CONFIG_IU_NWINDOWS;
  constant CFG_V8   	: integer := CFG_IU_V8;
  constant CFG_MAC  	: integer := CONFIG_IU_MUL_MAC;
  constant CFG_SVT  	: integer := CONFIG_IU_SVT;
  constant CFG_RSTADDR 	: integer := 16#CONFIG_IU_RSTADDR#;
  constant CFG_LDDEL	: integer := CONFIG_IU_LDELAY;
  constant CFG_NWP  	: integer := CONFIG_IU_WATCHPOINTS;
  constant CFG_PWD 	: integer := CONFIG_PWD*2;
  constant CFG_FPU 	: integer := CONFIG_FPU + 16*CONFIG_FPU_NETLIST;
  constant CFG_GRFPUSH  : integer := CONFIG_FPU_GRFPU_SHARED;
  constant CFG_ICEN  	: integer := CONFIG_ICACHE_ENABLE;
  constant CFG_ISETS	: integer := CFG_IU_ISETS;
  constant CFG_ISETSZ	: integer := CFG_ICACHE_SZ;
  constant CFG_ILINE 	: integer := CFG_ILINE_SZ;
  constant CFG_IREPL 	: integer := CFG_ICACHE_ALGORND;
  constant CFG_ILOCK 	: integer := CONFIG_ICACHE_LOCK;
  constant CFG_ILRAMEN	: integer := CONFIG_ICACHE_LRAM;
  constant CFG_ILRAMADDR: integer := 16#CONFIG_ICACHE_LRSTART#;
  constant CFG_ILRAMSZ	: integer := CFG_ILRAM_SIZE;
  constant CFG_DCEN  	: integer := CONFIG_DCACHE_ENABLE;
  constant CFG_DSETS	: integer := CFG_IU_DSETS;
  constant CFG_DSETSZ	: integer := CFG_DCACHE_SZ;
  constant CFG_DLINE 	: integer := CFG_DLINE_SZ;
  constant CFG_DREPL 	: integer := CFG_DCACHE_ALGORND;
  constant CFG_DLOCK 	: integer := CONFIG_DCACHE_LOCK;
  constant CFG_DSNOOP	: integer := CONFIG_DCACHE_SNOOP + CONFIG_DCACHE_SNOOP_FAST + 4*CONFIG_DCACHE_SNOOP_SEPTAG;
  constant CFG_DFIXED	: integer := 16#CONFIG_CACHE_FIXED#;
  constant CFG_DLRAMEN	: integer := CONFIG_DCACHE_LRAM;
  constant CFG_DLRAMADDR: integer := 16#CONFIG_DCACHE_LRSTART#;
  constant CFG_DLRAMSZ	: integer := CFG_DLRAM_SIZE;
  constant CFG_MMUEN    : integer := CONFIG_MMUEN;
  constant CFG_ITLBNUM  : integer := CONFIG_ITLBNUM;
  constant CFG_DTLBNUM  : integer := CONFIG_DTLBNUM;
  constant CFG_TLB_TYPE : integer := CONFIG_TLB_TYPE;
  constant CFG_TLB_REP  : integer := CONFIG_TLB_REP;
  constant CFG_DSU   	: integer := CONFIG_DSU_ENABLE;
  constant CFG_ITBSZ 	: integer := CFG_DSU_ITB;
  constant CFG_ATBSZ 	: integer := CFG_DSU_ATB;
  constant CFG_LEON3FT_EN   : integer := CONFIG_LEON3FT_EN;
  constant CFG_IUFT_EN      : integer := CONFIG_IUFT_EN;
  constant CFG_FPUFT_EN     : integer := CONFIG_FPUFT;
  constant CFG_RF_ERRINJ    : integer := CONFIG_RF_ERRINJ;	
  constant CFG_CACHE_FT_EN  : integer := CONFIG_CACHE_FT_EN;
  constant CFG_CACHE_ERRINJ : integer := CONFIG_CACHE_ERRINJ;	
  constant CFG_LEON3_NETLIST: integer := CONFIG_LEON3_NETLIST;	
  constant CFG_DISAS    : integer := CONFIG_IU_DISAS + CONFIG_IU_DISAS_NET;
  constant CFG_PCLOW    : integer := CFG_DEBUG_PC32;

-- AMBA settings
  constant CFG_DEFMST  	: integer := CONFIG_AHB_DEFMST;
  constant CFG_RROBIN  	: integer := CONFIG_AHB_RROBIN;
  constant CFG_SPLIT   	: integer := CONFIG_AHB_SPLIT;
  constant CFG_AHBIO   	: integer := 16#CONFIG_AHB_IOADDR#;
  constant CFG_APBADDR 	: integer := 16#CONFIG_APB_HADDR#;

-- DSU UART
  constant CFG_AHB_UART	: integer := CONFIG_DSU_UART;

-- PROM/SRAM controller
  constant CFG_SRCTRL           : integer := CONFIG_SRCTRL;
  constant CFG_SRCTRL_PROMWS    : integer := CONFIG_SRCTRL_PROMWS;
  constant CFG_SRCTRL_RAMWS     : integer := CONFIG_SRCTRL_RAMWS;
  constant CFG_SRCTRL_IOWS      : integer := CONFIG_SRCTRL_IOWS;
  constant CFG_SRCTRL_RMW       : integer := CONFIG_SRCTRL_RMW;
  constant CFG_SRCTRL_8BIT      : integer := CONFIG_SRCTRL_8BIT;

  constant CFG_SRCTRL_SRBANKS   : integer := CFG_SR_CTRL_SRBANKS;
  constant CFG_SRCTRL_BANKSZ    : integer := CFG_SR_CTRL_BANKSZ;
  constant CFG_SRCTRL_ROMASEL   : integer := CONFIG_SRCTRL_ROMASEL;
-- LEON2 memory controller
  constant CFG_MCTRL_LEON2    : integer := CONFIG_MCTRL_LEON2;
  constant CFG_MCTRL_RAM8BIT  : integer := CONFIG_MCTRL_8BIT;
  constant CFG_MCTRL_RAM16BIT : integer := CONFIG_MCTRL_16BIT;
  constant CFG_MCTRL_5CS      : integer := CONFIG_MCTRL_5CS;
  constant CFG_MCTRL_SDEN     : integer := CONFIG_MCTRL_SDRAM;
  constant CFG_MCTRL_SEPBUS   : integer := CONFIG_MCTRL_SDRAM_SEPBUS;
  constant CFG_MCTRL_INVCLK   : integer := CONFIG_MCTRL_SDRAM_INVCLK;
  constant CFG_MCTRL_SD64     : integer := CONFIG_MCTRL_SDRAM_BUS64;
  constant CFG_MCTRL_PAGE     : integer := CONFIG_MCTRL_PAGE + CONFIG_MCTRL_PROGPAGE;

-- SDRAM controller
  constant CFG_SDCTRL  	: integer := CONFIG_SDCTRL;
  constant CFG_SDCTRL_INVCLK  	: integer := CONFIG_SDCTRL_INVCLK;
  constant CFG_SDCTRL_SD64    	: integer := CONFIG_SDCTRL_BUS64;
  constant CFG_SDCTRL_PAGE    	: integer := CONFIG_SDCTRL_PAGE + CONFIG_SDCTRL_PROGPAGE;

-- AHB RAM
  constant CFG_AHBRAMEN	: integer := CONFIG_AHBRAM_ENABLE;
  constant CFG_AHBRSZ	: integer := CFG_AHBRAMSZ;
  constant CFG_AHBRADDR	: integer := 16#CONFIG_AHBRAM_START#;

-- PCI interface
  constant CFG_PCI     	: integer := CFG_PCITYPE;
  constant CFG_PCIVID   : integer := 16#CONFIG_PCI_VENDORID#;
  constant CFG_PCIDID   : integer := 16#CONFIG_PCI_DEVICEID#;
  constant CFG_PCIDEPTH : integer := CFG_PCIFIFO;
  constant CFG_PCI_MTF  : integer := CFG_PCI_ENFIFO;

-- PCI arbiter
  constant CFG_PCI_ARB  : integer := CONFIG_PCI_ARBITER;
  constant CFG_PCI_ARBAPB : integer := CONFIG_PCI_ARBITER_APB;
  constant CFG_PCI_ARB_NGNT : integer := CONFIG_PCI_ARBITER_NREQ;

-- PCI trace buffer
  constant CFG_PCITBUFEN: integer := CONFIG_PCI_TRACE;
  constant CFG_PCITBUF  : integer := CFG_PCI_TRACEBUF;

-- UART 1
  constant CFG_UART1_ENABLE : integer := CONFIG_UART1_ENABLE;
  constant CFG_UART1_FIFO   : integer := CFG_UA1_FIFO;

-- UART 2
  constant CFG_UART2_ENABLE : integer := CONFIG_UART2_ENABLE;
  constant CFG_UART2_FIFO   : integer := CFG_UA2_FIFO;

-- LEON3 interrupt controller
  constant CFG_IRQ3_ENABLE  : integer := CONFIG_IRQ3_ENABLE;

-- Modular timer
  constant CFG_GPT_ENABLE   : integer := CONFIG_GPT_ENABLE;
  constant CFG_GPT_NTIM     : integer := CONFIG_GPT_NTIM;
  constant CFG_GPT_SW       : integer := CONFIG_GPT_SW;
  constant CFG_GPT_TW       : integer := CONFIG_GPT_TW;
  constant CFG_GPT_IRQ      : integer := CONFIG_GPT_IRQ;
  constant CFG_GPT_SEPIRQ   : integer := CONFIG_GPT_SEPIRQ;
  constant CFG_GPT_WDOGEN   : integer := CONFIG_GPT_WDOGEN;
  constant CFG_GPT_WDOG     : integer := 16#CONFIG_GPT_WDOG#;

-- GPIO port
  constant CFG_GRGPIO_ENABLE : integer := CONFIG_GRGPIO_ENABLE;
  constant CFG_GRGPIO_IMASK  : integer := 16#CONFIG_GRGPIO_IMASK#;
  constant CFG_GRGPIO_WIDTH  : integer := CONFIG_GRGPIO_WIDTH;

-- GRLIB debugging
  constant CFG_DUART    : integer := CONFIG_DEBUG_UART;
