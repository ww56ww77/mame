// license:BSD-3-Clause
// copyright-holders:Farfetch'd, R. Belmont

#ifndef MAME_CPU_V60_V60D_H
#define MAME_CPU_V60_V60D_H

#pragma once

class v60_disassembler : public util::disasm_interface
{
public:
	v60_disassembler() = default;
	virtual ~v60_disassembler() = default;

	virtual u32 opcode_alignment() const override;
	virtual offs_t disassemble(std::ostream &stream, offs_t pc, const data_buffer &opcodes, const data_buffer &params) override;

private:
	static const char *const v60_reg_names[69];
	static u32 (v60_disassembler::*const dasm_optable_58[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_59[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5A[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5B[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5C[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5D[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5E[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_5F[32])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_C6[8])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable_C7[8])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	static u32 (v60_disassembler::*const dasm_optable[256])(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);

	u32 dop58(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop58UNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop59(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop59UNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5A(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5AUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5B(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5BUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5C(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5CUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5D(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5DUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5E(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5EUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5F(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dop5FUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopABSFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopABSFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDCB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDCH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDCW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDDC(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopADDW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDNBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDNBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopANDW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBE16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBE8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBGE16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBGE8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBGT16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBGT8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBH16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBH8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBL16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBL8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBLE16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBLE8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBLT16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBLT8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBN16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBN8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNE16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNE8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNH16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNH8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNL16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNL8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNV16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBNV8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBP16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBP8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBR16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBR8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBRK(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBRKV(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBSR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBV16(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopBV8(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopC6(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopC7(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCALL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCAXI(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCHKAE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCHKAR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCHKAW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCHLVL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCLR1(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCLRTLB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCLRTLBA(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPBFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPBFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPBFZ(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCFB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCFH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCSB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPCSH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCMPW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTDPZ(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTDZP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTLS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTLW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTSL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTSW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTWL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopCVTWS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBGE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBGT(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBLE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBLT(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBN(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBNE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBNH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBNL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBNV(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDBV(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDECB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDECH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDECW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDISPOSE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVUW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVUX(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopDIVX(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopEXTBFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopEXTBFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopEXTBFZ(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopGETATE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopGETPSW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopGETPTE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopGETRA(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopHALT(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINCB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINCH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINCW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINSBFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINSBFR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopINW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopJMP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopJSR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopLDPR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopLDTASK(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCFDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCFDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCFUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCFUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCSB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCSH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVCUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVEAB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVEAH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVEAW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVSBH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVSBW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVSHW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVTHB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVTWB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVTWH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVZBH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVZBW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMOVZHW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULUW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULUX(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopMULX(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNEGB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNEGFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNEGFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNEGH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNEGW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOT1(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOTB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOTBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOTBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOTH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopNOTW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORNBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORNBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopORW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopOUTB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopOUTH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopOUTW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopPOP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopPOPM(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopPREPARE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopPUSH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopPUSHM(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMUW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopREMW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRET(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRETIS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRETIU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTCB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTCH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTCW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopROTW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRSR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRVBIT(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopRVBYT(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCH0BSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCH0BSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCH1BSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCH1BSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCHCDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCHCDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCHCUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCHCUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCLFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSCLFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSET1(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSETF(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHAB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHAH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHAW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHLB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHLH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSHLW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSKPCDB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSKPCDH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSKPCUB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSKPCUH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSTPR(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSTTASK(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBCB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBCH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBCW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBDC(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBFS(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBRDC(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopSUBW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTASI(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTEST1(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTESTB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTESTH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTESTW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTRAP(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopTRAPFL(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopUNHANDLED(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopUPDATE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopUPDPSWH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopUPDPSWW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopUPDPTE(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXCHB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXCHH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXCHW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORB(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORH(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORNBSD(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORNBSU(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 dopXORW(unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);

	void out_AM_Register(int reg, std::ostream &stream);
	void out_AM_RegisterIndirect(int reg, int opsize, std::ostream &stream);
	void out_AM_RegisterIndirectIndexed(int rn, int rx, int opsize, std::ostream &stream);
	void out_AM_Autoincrement(int reg, int opsize, std::ostream &stream);
	void out_AM_Autodecrement(int reg, int opsize, std::ostream &stream);
	void out_AM_Displacement(int reg, int disp, int opsize, std::ostream &stream);
	void out_AM_DisplacementIndexed(int rn, int rx, int disp, int opsize, std::ostream &stream);
	void out_AM_PCDisplacement(offs_t pc, int disp, int opsize, std::ostream &stream);
	void out_AM_PCDisplacementIndexed(offs_t pc, int disp, int rx, int opsize, std::ostream &stream);
	void out_AM_DisplacementIndirect(int reg, int disp, int opsize, std::ostream &stream);
	void out_AM_DisplacementIndirectIndexed(int rn, int rx, int disp, int opsize, std::ostream &stream);
	void out_AM_PCDisplacementIndirect(offs_t pc, int disp, int opsize, std::ostream &stream);
	void out_AM_PCDisplacementIndirectIndexed(offs_t pc, int disp, int rx, int opsize, std::ostream &stream);
	void out_AM_DoubleDisplacement(int reg, int disp2, int disp1, int opsize, std::ostream &stream);
	void out_AM_PCDoubleDisplacement(offs_t pc, int disp2, int disp1, int opsize, std::ostream &stream);
	void out_AM_DirectAddress(unsigned addr, int opsize, std::ostream &stream);
	void out_AM_DirectAddressIndexed(unsigned addr, int rx, int opsize, std::ostream &stream);
	void out_AM_DirectAddressDeferred(unsigned addr, int opsize, std::ostream &stream);
	void out_AM_DirectAddressDeferredIndexed(unsigned addr, int rx, int opsize, std::ostream &stream);	
	void out_AM_Immediate(unsigned value, int opsize, std::ostream &stream);
	u32 decode_AM(unsigned ipc, offs_t pc, int m, int opsize, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F1(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F2(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F1F2(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F3(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F4a(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F4b(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F5(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F6(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F7a(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F7b(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);
	u32 decode_F7c(const char *opnm, int opsize1, int opsize2, unsigned ipc, offs_t pc, const data_buffer &opcodes, std::ostream &stream);

};

#endif