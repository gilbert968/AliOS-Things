################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf *.sni *.dbg *.lst *.lis *.lpp *.map *.x *.lbp *.bls *.libelf *.rel *.lbk *.abs  *.obj *.p *.pp *.d *.asm 1st/*.obj 1st/*.d 1st/*.asm 1st/*.abs

# All of the sources participating in the build are defined here
-include sources.mk
-include middleware/linkkit/sdk-c/src/infra/utils/misc/subdir.mk
-include kernel/fs/kv/subdir.mk
-include middleware/linkkit/sdk-c/src/sdk-impl/subdir.mk
-include network/nal/atparser/subdir.mk
-include platform/arch/rx600/rx65n/e2s/subdir.mk
-include osal/aos/subdir.mk
-include platform/mcu/r5f565ne/uart/subdir.mk
-include network/yloop/hal/subdir.mk
-include middleware/linkkit/sdk-c/src/infra/utils/digest/subdir.mk
-include platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/subdir.mk
-include kernel/fs/vfs/subdir.mk
-include network/netmgr/interfaces/subdir.mk
-include network/yloop/src/subdir.mk
-include utility/cjson/subdir.mk
-include network/netmgr/hal/subdir.mk
-include platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/subdir.mk
-include platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/subdir.mk
-include security/mbedtls/src/subdir.mk
-include security/alicrypto/sal/src/subdir.mk
-include utility/activation/subdir.mk
-include utility/libc/subdir.mk
-include security/ls_osa/src/subdir.mk
-include middleware/linkkit/sdk-c/src/infra/system/facility/subdir.mk
-include platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/subdir.mk
-include middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/subdir.mk
-include middleware/linkkit/sdk-c/src/infra/system/subdir.mk
-include middleware/linkkit/sdk-c/src/infra/log/subdir.mk
-include middleware/linkkit/sdk-c/src/protocol/mqtt/client/subdir.mk
-include platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/subdir.mk
-include middleware/uagent/ulog/subdir.mk
-include platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/subdir.mk
-include drivers/sal/wifi/mk3060/subdir.mk
-include kernel/init/subdir.mk
-include kernel/cli/subdir.mk
-include platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/subdir.mk
-include platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/subdir.mk
-include security/alicrypto/api/src/subdir.mk
-include middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/subdir.mk
-include platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/subdir.mk
-include middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/subdir.mk
-include board/r5f565ne-rtbrx65n/subdir.mk
-include app/example/mqttapp/subdir.mk
-include network/netmgr/subdir.mk
-include platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/subdir.mk
-include kernel/rhino/subdir.mk
-include platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/subdir.mk
-include platform/mcu/r5f565ne/flash/subdir.mk
-include kernel/debug/subdir.mk
-include platform/mcu/r5f565ne/aos/subdir.mk
-include security/alicrypto/core/src/subdir.mk
-include platform/mcu/r5f565ne/bsp_RTB/subdir.mk
-include utility/libc/compilers/rx/subdir.mk
-include utility/activation/chip_code/subdir.mk
-include middleware/linkkit/sdk-c/src/services/mdal/sal/src/subdir.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif 
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif 
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif 
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif 
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif 
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif 
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif 
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif 
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif 
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif 
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif 
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif 
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif 
endif

ifneq ($(strip $(SRC_UPPER_SRCS)),)
ALL_ASMS += $(SRC_UPPER_SRCS) 
endif
ifneq ($(strip $(SRC_SRCS)),)
ALL_ASMS += $(SRC_SRCS) 
endif
ifneq ($(strip $(S_UPPER_SRCS)),)
ALL_ASMS += $(S_UPPER_SRCS) 
endif
ifneq ($(strip $(S_SRCS)),)
ALL_ASMS += $(S_SRCS) 
endif


-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
LINKER_OUTPUT_OUTPUTS += \
RTB_ALIOS210.abs

LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \
RTB_ALIOS210.lib

CONVERTOR_OUTPUT_OUTPUTS += \
RTB_ALIOS210.mot \
RTB_ALIOS210.x

OBJS := \
$(COMPILER_OBJS) \
$(INDIVIDUAL_COMPILER_OBJS) \
$(ASSEMBLER_OBJS) \
$(CUSTOM_OBJS)

# All Target
all: $(CONVERTOR_OUTPUT_OUTPUTS) 
	@echo 'Build complete.'

RTB_ALIOS210.mot: $(LINKER_OUTPUT_OUTPUTS) 
	@echo 'Invoking: Converter'
	@echo 'Building target:'
	rlink "RTB_ALIOS210.abs" -form=stype -output="RTB_ALIOS210.mot"  -crc=ffffff70=fff00000-ffFffDFF/16-CCITT-MSB:LITTLE -nologo -nomessage
	rlink "RTB_ALIOS210.abs" -form=stype -output="Rx65N_MQTT_Sample.mot= FFF00000-FFFFFFFF" -space=FF -crc=ffffff70=fff00000-ffFffDFF/16-CCITT-MSB:LITTLE -nologo -nomessage
	@echo 'Finished building target:'
	@echo.


RTB_ALIOS210.abs: $(OBJS)  $(ALL_ASMS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)   \
E:\work\etouch\2018\ALIos\AliOS-Things-rx_1.3.1_rx_platform\projects\e2studio\rx_mbedtls_lib\Debug\rx_mbedtls_lib.lib
	@echo 'Invoking: Linker'
	rlink -library="E:\work\etouch\2018\ALIos\AliOS-Things-rx_1.3.1_rx_platform\projects\e2studio\rx_mbedtls_lib\Debug\rx_mbedtls_lib.lib" -noprelink -subcommand="LinkerSubCommand.tmp"  -output="RTB_ALIOS210.abs" -form=absolute -nomessage -list=RTB_ALIOS210.map -show=symbol,total_size -nooptimize -rom=D=R,D_1=R_1,D_2=R_2,PFRAM=RPFRAM,PFRAM2=RPFRAM2 -stack -nologo
	@echo 'Finished building:'
	@echo.


RTB_ALIOS210.lib: 
	@echo 'Invoking: Library Generator'
	lbgrx -isa=rxv2 -fpu -lang=c99 -head=runtime,stdio,stdlib,string -output="RTB_ALIOS210.lib" -nofloat -nologo
	@echo 'Finished building:'
	@echo.

RTB_ALIOS210.x: RTB_ALIOS210.abs
		-D:\e2studio_6\eclipse\/../\Utilities\\ccrx\renesas_cc_converter.exe RTB_ALIOS210.abs RTB_ALIOS210.x

# Other Targets
clean:
	-$(RM) $(LINKER_OUTPUT_OUTPUTS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(CONVERTOR_OUTPUT_OUTPUTS)
	-rm -rf middleware/linkkit/sdk-c/src/infra/utils/misc/*.obj middleware/linkkit/sdk-c/src/infra/utils/misc/*.d middleware/linkkit/sdk-c/src/infra/utils/misc/*.asm middleware/linkkit/sdk-c/src/infra/utils/misc/*.p middleware/linkkit/sdk-c/src/infra/utils/misc/*.src middleware/linkkit/sdk-c/src/infra/utils/misc/*.jmp middleware/linkkit/sdk-c/src/infra/utils/misc/*.lst middleware/linkkit/sdk-c/src/infra/utils/misc/*.prn 
	-rm -rf kernel/fs/kv/*.obj kernel/fs/kv/*.d kernel/fs/kv/*.asm kernel/fs/kv/*.p kernel/fs/kv/*.src kernel/fs/kv/*.jmp kernel/fs/kv/*.lst kernel/fs/kv/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/sdk-impl/*.obj middleware/linkkit/sdk-c/src/sdk-impl/*.d middleware/linkkit/sdk-c/src/sdk-impl/*.asm middleware/linkkit/sdk-c/src/sdk-impl/*.p middleware/linkkit/sdk-c/src/sdk-impl/*.src middleware/linkkit/sdk-c/src/sdk-impl/*.jmp middleware/linkkit/sdk-c/src/sdk-impl/*.lst middleware/linkkit/sdk-c/src/sdk-impl/*.prn 
	-rm -rf network/nal/atparser/*.obj network/nal/atparser/*.d network/nal/atparser/*.asm network/nal/atparser/*.p network/nal/atparser/*.src network/nal/atparser/*.jmp network/nal/atparser/*.lst network/nal/atparser/*.prn 
	-rm -rf platform/arch/rx600/rx65n/e2s/*.obj platform/arch/rx600/rx65n/e2s/*.d platform/arch/rx600/rx65n/e2s/*.asm platform/arch/rx600/rx65n/e2s/*.p platform/arch/rx600/rx65n/e2s/*.src platform/arch/rx600/rx65n/e2s/*.jmp platform/arch/rx600/rx65n/e2s/*.lst platform/arch/rx600/rx65n/e2s/*.prn 
	-rm -rf osal/aos/*.obj osal/aos/*.d osal/aos/*.asm osal/aos/*.p osal/aos/*.src osal/aos/*.jmp osal/aos/*.lst osal/aos/*.prn 
	-rm -rf platform/mcu/r5f565ne/uart/*.obj platform/mcu/r5f565ne/uart/*.d platform/mcu/r5f565ne/uart/*.asm platform/mcu/r5f565ne/uart/*.p platform/mcu/r5f565ne/uart/*.src platform/mcu/r5f565ne/uart/*.jmp platform/mcu/r5f565ne/uart/*.lst platform/mcu/r5f565ne/uart/*.prn 
	-rm -rf network/yloop/hal/*.obj network/yloop/hal/*.d network/yloop/hal/*.asm network/yloop/hal/*.p network/yloop/hal/*.src network/yloop/hal/*.jmp network/yloop/hal/*.lst network/yloop/hal/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/infra/utils/digest/*.obj middleware/linkkit/sdk-c/src/infra/utils/digest/*.d middleware/linkkit/sdk-c/src/infra/utils/digest/*.asm middleware/linkkit/sdk-c/src/infra/utils/digest/*.p middleware/linkkit/sdk-c/src/infra/utils/digest/*.src middleware/linkkit/sdk-c/src/infra/utils/digest/*.jmp middleware/linkkit/sdk-c/src/infra/utils/digest/*.lst middleware/linkkit/sdk-c/src/infra/utils/digest/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.obj platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.d platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.asm platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.p platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.src platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.jmp platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.lst platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_4/*.prn 
	-rm -rf kernel/fs/vfs/*.obj kernel/fs/vfs/*.d kernel/fs/vfs/*.asm kernel/fs/vfs/*.p kernel/fs/vfs/*.src kernel/fs/vfs/*.jmp kernel/fs/vfs/*.lst kernel/fs/vfs/*.prn 
	-rm -rf network/netmgr/interfaces/*.obj network/netmgr/interfaces/*.d network/netmgr/interfaces/*.asm network/netmgr/interfaces/*.p network/netmgr/interfaces/*.src network/netmgr/interfaces/*.jmp network/netmgr/interfaces/*.lst network/netmgr/interfaces/*.prn 
	-rm -rf network/yloop/src/*.obj network/yloop/src/*.d network/yloop/src/*.asm network/yloop/src/*.p network/yloop/src/*.src network/yloop/src/*.jmp network/yloop/src/*.lst network/yloop/src/*.prn 
	-rm -rf utility/cjson/*.obj utility/cjson/*.d utility/cjson/*.asm utility/cjson/*.p utility/cjson/*.src utility/cjson/*.jmp utility/cjson/*.lst utility/cjson/*.prn 
	-rm -rf network/netmgr/hal/*.obj network/netmgr/hal/*.d network/netmgr/hal/*.asm network/netmgr/hal/*.p network/netmgr/hal/*.src network/netmgr/hal/*.jmp network/netmgr/hal/*.lst network/netmgr/hal/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.obj platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.d platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.asm platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.p platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.src platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.jmp platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.lst platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/rx65n/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.obj platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.d platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.asm platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.p platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.src platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.jmp platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.lst platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_3/*.prn 
	-rm -rf security/mbedtls/src/*.obj security/mbedtls/src/*.d security/mbedtls/src/*.asm security/mbedtls/src/*.p security/mbedtls/src/*.src security/mbedtls/src/*.jmp security/mbedtls/src/*.lst security/mbedtls/src/*.prn 
	-rm -rf security/alicrypto/sal/src/*.obj security/alicrypto/sal/src/*.d security/alicrypto/sal/src/*.asm security/alicrypto/sal/src/*.p security/alicrypto/sal/src/*.src security/alicrypto/sal/src/*.jmp security/alicrypto/sal/src/*.lst security/alicrypto/sal/src/*.prn 
	-rm -rf utility/activation/*.obj utility/activation/*.d utility/activation/*.asm utility/activation/*.p utility/activation/*.src utility/activation/*.jmp utility/activation/*.lst utility/activation/*.prn 
	-rm -rf utility/libc/*.obj utility/libc/*.d utility/libc/*.asm utility/libc/*.p utility/libc/*.src utility/libc/*.jmp utility/libc/*.lst utility/libc/*.prn 
	-rm -rf security/ls_osa/src/*.obj security/ls_osa/src/*.d security/ls_osa/src/*.asm security/ls_osa/src/*.p security/ls_osa/src/*.src security/ls_osa/src/*.jmp security/ls_osa/src/*.lst security/ls_osa/src/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/infra/system/facility/*.obj middleware/linkkit/sdk-c/src/infra/system/facility/*.d middleware/linkkit/sdk-c/src/infra/system/facility/*.asm middleware/linkkit/sdk-c/src/infra/system/facility/*.p middleware/linkkit/sdk-c/src/infra/system/facility/*.src middleware/linkkit/sdk-c/src/infra/system/facility/*.jmp middleware/linkkit/sdk-c/src/infra/system/facility/*.lst middleware/linkkit/sdk-c/src/infra/system/facility/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.obj platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.d platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.asm platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.p platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.src platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.jmp platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.lst platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_2/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.obj middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.d middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.asm middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.p middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.src middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.jmp middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.lst middleware/linkkit/sdk-c/src/ref-impl/hal/os/alios/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/infra/system/*.obj middleware/linkkit/sdk-c/src/infra/system/*.d middleware/linkkit/sdk-c/src/infra/system/*.asm middleware/linkkit/sdk-c/src/infra/system/*.p middleware/linkkit/sdk-c/src/infra/system/*.src middleware/linkkit/sdk-c/src/infra/system/*.jmp middleware/linkkit/sdk-c/src/infra/system/*.lst middleware/linkkit/sdk-c/src/infra/system/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/infra/log/*.obj middleware/linkkit/sdk-c/src/infra/log/*.d middleware/linkkit/sdk-c/src/infra/log/*.asm middleware/linkkit/sdk-c/src/infra/log/*.p middleware/linkkit/sdk-c/src/infra/log/*.src middleware/linkkit/sdk-c/src/infra/log/*.jmp middleware/linkkit/sdk-c/src/infra/log/*.lst middleware/linkkit/sdk-c/src/infra/log/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.obj middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.d middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.asm middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.p middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.src middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.jmp middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.lst middleware/linkkit/sdk-c/src/protocol/mqtt/client/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.obj platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.d platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.asm platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.p platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.src platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.jmp platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.lst platform/mcu/r5f565ne/hal/r_byteq_v1.60/r_byteq/src/*.prn 
	-rm -rf middleware/uagent/ulog/*.obj middleware/uagent/ulog/*.d middleware/uagent/ulog/*.asm middleware/uagent/ulog/*.p middleware/uagent/ulog/*.src middleware/uagent/ulog/*.jmp middleware/uagent/ulog/*.lst middleware/uagent/ulog/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.obj platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.d platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.asm platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.p platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.src platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.jmp platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.lst platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/flash_type_1/*.prn 
	-rm -rf drivers/sal/wifi/mk3060/*.obj drivers/sal/wifi/mk3060/*.d drivers/sal/wifi/mk3060/*.asm drivers/sal/wifi/mk3060/*.p drivers/sal/wifi/mk3060/*.src drivers/sal/wifi/mk3060/*.jmp drivers/sal/wifi/mk3060/*.lst drivers/sal/wifi/mk3060/*.prn 
	-rm -rf kernel/init/*.obj kernel/init/*.d kernel/init/*.asm kernel/init/*.p kernel/init/*.src kernel/init/*.jmp kernel/init/*.lst kernel/init/*.prn 
	-rm -rf kernel/cli/*.obj kernel/cli/*.d kernel/cli/*.asm kernel/cli/*.p kernel/cli/*.src kernel/cli/*.jmp kernel/cli/*.lst kernel/cli/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.obj platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.d platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.asm platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.p platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.src platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.jmp platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.lst platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.obj platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.d platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.asm platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.p platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.src platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.jmp platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.lst platform/mcu/r5f565ne/hal/r_flash_rx_v3.20/r_flash_rx/src/*.prn 
	-rm -rf security/alicrypto/api/src/*.obj security/alicrypto/api/src/*.d security/alicrypto/api/src/*.asm security/alicrypto/api/src/*.p security/alicrypto/api/src/*.src security/alicrypto/api/src/*.jmp security/alicrypto/api/src/*.lst security/alicrypto/api/src/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.obj middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.d middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.asm middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.p middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.src middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.jmp middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.lst middleware/linkkit/sdk-c/src/sdk-impl/deprecated_linkkit/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.obj platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.d platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.asm platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.p platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.src platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.jmp platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.lst platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/board/generic_rx65n/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.obj middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.d middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.asm middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.p middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.src middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.jmp middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.lst middleware/linkkit/sdk-c/src/protocol/mqtt/MQTTPacket/*.prn 
	-rm -rf board/r5f565ne-rtbrx65n/*.obj board/r5f565ne-rtbrx65n/*.d board/r5f565ne-rtbrx65n/*.asm board/r5f565ne-rtbrx65n/*.p board/r5f565ne-rtbrx65n/*.src board/r5f565ne-rtbrx65n/*.jmp board/r5f565ne-rtbrx65n/*.lst board/r5f565ne-rtbrx65n/*.prn 
	-rm -rf app/example/mqttapp/*.obj app/example/mqttapp/*.d app/example/mqttapp/*.asm app/example/mqttapp/*.p app/example/mqttapp/*.src app/example/mqttapp/*.jmp app/example/mqttapp/*.lst app/example/mqttapp/*.prn 
	-rm -rf network/netmgr/*.obj network/netmgr/*.d network/netmgr/*.asm network/netmgr/*.p network/netmgr/*.src network/netmgr/*.jmp network/netmgr/*.lst network/netmgr/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.obj platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.d platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.asm platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.p platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.src platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.jmp platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.lst platform/mcu/r5f565ne/hal/r_bsp_v3.60/r_bsp/mcu/all/*.prn 
	-rm -rf kernel/rhino/*.obj kernel/rhino/*.d kernel/rhino/*.asm kernel/rhino/*.p kernel/rhino/*.src kernel/rhino/*.jmp kernel/rhino/*.lst kernel/rhino/*.prn 
	-rm -rf platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.obj platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.d platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.asm platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.p platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.src platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.jmp platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.lst platform/mcu/r5f565ne/hal/r_sci_rx_v2.00/src/targets/rx65n/*.prn 
	-rm -rf platform/mcu/r5f565ne/flash/*.obj platform/mcu/r5f565ne/flash/*.d platform/mcu/r5f565ne/flash/*.asm platform/mcu/r5f565ne/flash/*.p platform/mcu/r5f565ne/flash/*.src platform/mcu/r5f565ne/flash/*.jmp platform/mcu/r5f565ne/flash/*.lst platform/mcu/r5f565ne/flash/*.prn 
	-rm -rf kernel/debug/*.obj kernel/debug/*.d kernel/debug/*.asm kernel/debug/*.p kernel/debug/*.src kernel/debug/*.jmp kernel/debug/*.lst kernel/debug/*.prn 
	-rm -rf platform/mcu/r5f565ne/aos/*.obj platform/mcu/r5f565ne/aos/*.d platform/mcu/r5f565ne/aos/*.asm platform/mcu/r5f565ne/aos/*.p platform/mcu/r5f565ne/aos/*.src platform/mcu/r5f565ne/aos/*.jmp platform/mcu/r5f565ne/aos/*.lst platform/mcu/r5f565ne/aos/*.prn 
	-rm -rf security/alicrypto/core/src/*.obj security/alicrypto/core/src/*.d security/alicrypto/core/src/*.asm security/alicrypto/core/src/*.p security/alicrypto/core/src/*.src security/alicrypto/core/src/*.jmp security/alicrypto/core/src/*.lst security/alicrypto/core/src/*.prn 
	-rm -rf platform/mcu/r5f565ne/bsp_RTB/*.obj platform/mcu/r5f565ne/bsp_RTB/*.d platform/mcu/r5f565ne/bsp_RTB/*.asm platform/mcu/r5f565ne/bsp_RTB/*.p platform/mcu/r5f565ne/bsp_RTB/*.src platform/mcu/r5f565ne/bsp_RTB/*.jmp platform/mcu/r5f565ne/bsp_RTB/*.lst platform/mcu/r5f565ne/bsp_RTB/*.prn 
	-rm -rf utility/libc/compilers/rx/*.obj utility/libc/compilers/rx/*.d utility/libc/compilers/rx/*.asm utility/libc/compilers/rx/*.p utility/libc/compilers/rx/*.src utility/libc/compilers/rx/*.jmp utility/libc/compilers/rx/*.lst utility/libc/compilers/rx/*.prn 
	-rm -rf utility/activation/chip_code/*.obj utility/activation/chip_code/*.d utility/activation/chip_code/*.asm utility/activation/chip_code/*.p utility/activation/chip_code/*.src utility/activation/chip_code/*.jmp utility/activation/chip_code/*.lst utility/activation/chip_code/*.prn 
	-rm -rf middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.obj middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.d middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.asm middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.p middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.src middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.jmp middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.lst middleware/linkkit/sdk-c/src/services/mdal/sal/src/*.prn 
	@echo
	@echo 'Clean complete.'

.PHONY: all clean 
-include ../makefile.targets