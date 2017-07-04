static const char* mnemonicStrings[] =
{
    /*0000*/ "invalid",
    /*0001*/ "aaa",
    /*0002*/ "aad",
    /*0003*/ "aam",
    /*0004*/ "aas",
    /*0005*/ "adc",
    /*0006*/ "adcx",
    /*0007*/ "add",
    /*0008*/ "addpd",
    /*0009*/ "addps",
    /*000A*/ "addsd",
    /*000B*/ "addss",
    /*000C*/ "addsubpd",
    /*000D*/ "addsubps",
    /*000E*/ "adox",
    /*000F*/ "aesdec",
    /*0010*/ "aesdeclast",
    /*0011*/ "aesenc",
    /*0012*/ "aesenclast",
    /*0013*/ "aesimc",
    /*0014*/ "aeskeygenassist",
    /*0015*/ "and",
    /*0016*/ "andn",
    /*0017*/ "andnpd",
    /*0018*/ "andnps",
    /*0019*/ "andpd",
    /*001A*/ "andps",
    /*001B*/ "arpl",
    /*001C*/ "bextr",
    /*001D*/ "bextr_xop",
    /*001E*/ "blcfill",
    /*001F*/ "blci",
    /*0020*/ "blcic",
    /*0021*/ "blcmsk",
    /*0022*/ "blcs",
    /*0023*/ "blendpd",
    /*0024*/ "blendps",
    /*0025*/ "blendvpd",
    /*0026*/ "blendvps",
    /*0027*/ "blsfill",
    /*0028*/ "blsi",
    /*0029*/ "blsic",
    /*002A*/ "blsmsk",
    /*002B*/ "blsr",
    /*002C*/ "bndcl",
    /*002D*/ "bndcn",
    /*002E*/ "bndcu",
    /*002F*/ "bndldx",
    /*0030*/ "bndmk",
    /*0031*/ "bndmov",
    /*0032*/ "bndstx",
    /*0033*/ "bound",
    /*0034*/ "bsf",
    /*0035*/ "bsr",
    /*0036*/ "bswap",
    /*0037*/ "bt",
    /*0038*/ "btc",
    /*0039*/ "btr",
    /*003A*/ "bts",
    /*003B*/ "bzhi",
    /*003C*/ "call",
    /*003D*/ "call_far",
    /*003E*/ "cbw",
    /*003F*/ "cdq",
    /*0040*/ "cdqe",
    /*0041*/ "clac",
    /*0042*/ "clc",
    /*0043*/ "cld",
    /*0044*/ "clevict0",
    /*0045*/ "clevict1",
    /*0046*/ "clflush",
    /*0047*/ "clflushopt",
    /*0048*/ "clgi",
    /*0049*/ "cli",
    /*004A*/ "clrssbsy",
    /*004B*/ "clts",
    /*004C*/ "clwb",
    /*004D*/ "clzero",
    /*004E*/ "cmc",
    /*004F*/ "cmovb",
    /*0050*/ "cmovbe",
    /*0051*/ "cmovl",
    /*0052*/ "cmovle",
    /*0053*/ "cmovnb",
    /*0054*/ "cmovnbe",
    /*0055*/ "cmovnl",
    /*0056*/ "cmovnle",
    /*0057*/ "cmovno",
    /*0058*/ "cmovnp",
    /*0059*/ "cmovns",
    /*005A*/ "cmovnz",
    /*005B*/ "cmovo",
    /*005C*/ "cmovp",
    /*005D*/ "cmovs",
    /*005E*/ "cmovz",
    /*005F*/ "cmp",
    /*0060*/ "cmppd",
    /*0061*/ "cmpps",
    /*0062*/ "cmpsb",
    /*0063*/ "cmpsd",
    /*0064*/ "cmpsq",
    /*0065*/ "cmpss",
    /*0066*/ "cmpsw",
    /*0067*/ "cmpxchg",
    /*0068*/ "cmpxchg16b",
    /*0069*/ "cmpxchg8b",
    /*006A*/ "comisd",
    /*006B*/ "comiss",
    /*006C*/ "cpuid",
    /*006D*/ "cqo",
    /*006E*/ "crc32",
    /*006F*/ "cvtdq2pd",
    /*0070*/ "cvtdq2ps",
    /*0071*/ "cvtpd2dq",
    /*0072*/ "cvtpd2pi",
    /*0073*/ "cvtpd2ps",
    /*0074*/ "cvtpi2pd",
    /*0075*/ "cvtpi2ps",
    /*0076*/ "cvtps2dq",
    /*0077*/ "cvtps2pd",
    /*0078*/ "cvtps2pi",
    /*0079*/ "cvtsd2si",
    /*007A*/ "cvtsd2ss",
    /*007B*/ "cvtsi2sd",
    /*007C*/ "cvtsi2ss",
    /*007D*/ "cvtss2sd",
    /*007E*/ "cvtss2si",
    /*007F*/ "cvttpd2dq",
    /*0080*/ "cvttpd2pi",
    /*0081*/ "cvttps2dq",
    /*0082*/ "cvttps2pi",
    /*0083*/ "cvttsd2si",
    /*0084*/ "cvttss2si",
    /*0085*/ "cwd",
    /*0086*/ "cwde",
    /*0087*/ "daa",
    /*0088*/ "das",
    /*0089*/ "dec",
    /*008A*/ "delay",
    /*008B*/ "div",
    /*008C*/ "divpd",
    /*008D*/ "divps",
    /*008E*/ "divsd",
    /*008F*/ "divss",
    /*0090*/ "dppd",
    /*0091*/ "dpps",
    /*0092*/ "emms",
    /*0093*/ "encls",
    /*0094*/ "enclu",
    /*0095*/ "endbr32",
    /*0096*/ "endbr64",
    /*0097*/ "enter",
    /*0098*/ "extractps",
    /*0099*/ "f2xm1",
    /*009A*/ "fabs",
    /*009B*/ "fadd",
    /*009C*/ "faddp",
    /*009D*/ "fbld",
    /*009E*/ "fbstp",
    /*009F*/ "fchs",
    /*00A0*/ "fcmovb",
    /*00A1*/ "fcmovbe",
    /*00A2*/ "fcmove",
    /*00A3*/ "fcmovnb",
    /*00A4*/ "fcmovnbe",
    /*00A5*/ "fcmovne",
    /*00A6*/ "fcmovnu",
    /*00A7*/ "fcmovu",
    /*00A8*/ "fcom",
    /*00A9*/ "fcomi",
    /*00AA*/ "fcomip",
    /*00AB*/ "fcomp",
    /*00AC*/ "fcompp",
    /*00AD*/ "fcos",
    /*00AE*/ "fdecstp",
    /*00AF*/ "fdisi8087_nop",
    /*00B0*/ "fdiv",
    /*00B1*/ "fdivp",
    /*00B2*/ "fdivr",
    /*00B3*/ "fdivrp",
    /*00B4*/ "femms",
    /*00B5*/ "feni8087_nop",
    /*00B6*/ "ffree",
    /*00B7*/ "ffreep",
    /*00B8*/ "fiadd",
    /*00B9*/ "ficom",
    /*00BA*/ "ficomp",
    /*00BB*/ "fidiv",
    /*00BC*/ "fidivr",
    /*00BD*/ "fild",
    /*00BE*/ "fimul",
    /*00BF*/ "fincstp",
    /*00C0*/ "fist",
    /*00C1*/ "fistp",
    /*00C2*/ "fisttp",
    /*00C3*/ "fisub",
    /*00C4*/ "fisubr",
    /*00C5*/ "fld",
    /*00C6*/ "fld1",
    /*00C7*/ "fldcw",
    /*00C8*/ "fldenv",
    /*00C9*/ "fldl2e",
    /*00CA*/ "fldl2t",
    /*00CB*/ "fldlg2",
    /*00CC*/ "fldln2",
    /*00CD*/ "fldpi",
    /*00CE*/ "fldz",
    /*00CF*/ "fmul",
    /*00D0*/ "fmulp",
    /*00D1*/ "fnclex",
    /*00D2*/ "fninit",
    /*00D3*/ "fnop",
    /*00D4*/ "fnsave",
    /*00D5*/ "fnstcw",
    /*00D6*/ "fnstenv",
    /*00D7*/ "fnstsw",
    /*00D8*/ "fpatan",
    /*00D9*/ "fprem",
    /*00DA*/ "fprem1",
    /*00DB*/ "fptan",
    /*00DC*/ "frndint",
    /*00DD*/ "frstor",
    /*00DE*/ "fscale",
    /*00DF*/ "fsetpm287_nop",
    /*00E0*/ "fsin",
    /*00E1*/ "fsincos",
    /*00E2*/ "fsqrt",
    /*00E3*/ "fst",
    /*00E4*/ "fstp",
    /*00E5*/ "fstpnce",
    /*00E6*/ "fsub",
    /*00E7*/ "fsubp",
    /*00E8*/ "fsubr",
    /*00E9*/ "fsubrp",
    /*00EA*/ "ftst",
    /*00EB*/ "fucom",
    /*00EC*/ "fucomi",
    /*00ED*/ "fucomip",
    /*00EE*/ "fucomp",
    /*00EF*/ "fucompp",
    /*00F0*/ "fwait",
    /*00F1*/ "fxam",
    /*00F2*/ "fxch",
    /*00F3*/ "fxrstor",
    /*00F4*/ "fxrstor64",
    /*00F5*/ "fxsave",
    /*00F6*/ "fxsave64",
    /*00F7*/ "fxtract",
    /*00F8*/ "fyl2x",
    /*00F9*/ "fyl2xp1",
    /*00FA*/ "getsec",
    /*00FB*/ "haddpd",
    /*00FC*/ "haddps",
    /*00FD*/ "hlt",
    /*00FE*/ "hsubpd",
    /*00FF*/ "hsubps",
    /*0100*/ "idiv",
    /*0101*/ "imul",
    /*0102*/ "in",
    /*0103*/ "inc",
    /*0104*/ "incsspd",
    /*0105*/ "incsspq",
    /*0106*/ "insb",
    /*0107*/ "insd",
    /*0108*/ "insertps",
    /*0109*/ "insw",
    /*010A*/ "int",
    /*010B*/ "int1",
    /*010C*/ "int3",
    /*010D*/ "into",
    /*010E*/ "invd",
    /*010F*/ "invept",
    /*0110*/ "invlpg",
    /*0111*/ "invlpga",
    /*0112*/ "invpcid",
    /*0113*/ "invvpid",
    /*0114*/ "iret",
    /*0115*/ "iretd",
    /*0116*/ "iretq",
    /*0117*/ "jb",
    /*0118*/ "jbe",
    /*0119*/ "jcxz",
    /*011A*/ "jecxz",
    /*011B*/ "jknzd",
    /*011C*/ "jkzd",
    /*011D*/ "jl",
    /*011E*/ "jle",
    /*011F*/ "jmp",
    /*0120*/ "jmp_far",
    /*0121*/ "jnb",
    /*0122*/ "jnbe",
    /*0123*/ "jnl",
    /*0124*/ "jnle",
    /*0125*/ "jno",
    /*0126*/ "jnp",
    /*0127*/ "jns",
    /*0128*/ "jnz",
    /*0129*/ "jo",
    /*012A*/ "jp",
    /*012B*/ "jrcxz",
    /*012C*/ "js",
    /*012D*/ "jz",
    /*012E*/ "kaddb",
    /*012F*/ "kaddd",
    /*0130*/ "kaddq",
    /*0131*/ "kaddw",
    /*0132*/ "kand",
    /*0133*/ "kandb",
    /*0134*/ "kandd",
    /*0135*/ "kandn",
    /*0136*/ "kandnb",
    /*0137*/ "kandnd",
    /*0138*/ "kandnq",
    /*0139*/ "kandnr",
    /*013A*/ "kandnw",
    /*013B*/ "kandq",
    /*013C*/ "kandw",
    /*013D*/ "kconcath",
    /*013E*/ "kconcatl",
    /*013F*/ "kextract",
    /*0140*/ "kmerge2l1h",
    /*0141*/ "kmerge2l1l",
    /*0142*/ "kmov",
    /*0143*/ "kmovb",
    /*0144*/ "kmovd",
    /*0145*/ "kmovq",
    /*0146*/ "kmovw",
    /*0147*/ "knot",
    /*0148*/ "knotb",
    /*0149*/ "knotd",
    /*014A*/ "knotq",
    /*014B*/ "knotw",
    /*014C*/ "kor",
    /*014D*/ "korb",
    /*014E*/ "kord",
    /*014F*/ "korq",
    /*0150*/ "kortestb",
    /*0151*/ "kortestd",
    /*0152*/ "kortestq",
    /*0153*/ "kortestw",
    /*0154*/ "korw",
    /*0155*/ "kshiftlb",
    /*0156*/ "kshiftld",
    /*0157*/ "kshiftlq",
    /*0158*/ "kshiftlw",
    /*0159*/ "kshiftrb",
    /*015A*/ "kshiftrd",
    /*015B*/ "kshiftrq",
    /*015C*/ "kshiftrw",
    /*015D*/ "ktestb",
    /*015E*/ "ktestd",
    /*015F*/ "ktestq",
    /*0160*/ "ktestw",
    /*0161*/ "kunpckbw",
    /*0162*/ "kunpckdq",
    /*0163*/ "kunpckwd",
    /*0164*/ "kxnor",
    /*0165*/ "kxnorb",
    /*0166*/ "kxnord",
    /*0167*/ "kxnorq",
    /*0168*/ "kxnorw",
    /*0169*/ "kxor",
    /*016A*/ "kxorb",
    /*016B*/ "kxord",
    /*016C*/ "kxorq",
    /*016D*/ "kxorw",
    /*016E*/ "lahf",
    /*016F*/ "lar",
    /*0170*/ "lddqu",
    /*0171*/ "ldmxcsr",
    /*0172*/ "lds",
    /*0173*/ "lea",
    /*0174*/ "leave",
    /*0175*/ "les",
    /*0176*/ "lfence",
    /*0177*/ "lfs",
    /*0178*/ "lgdt",
    /*0179*/ "lgs",
    /*017A*/ "lidt",
    /*017B*/ "lldt",
    /*017C*/ "llwpcb",
    /*017D*/ "lmsw",
    /*017E*/ "lodsb",
    /*017F*/ "lodsd",
    /*0180*/ "lodsq",
    /*0181*/ "lodsw",
    /*0182*/ "loop",
    /*0183*/ "loope",
    /*0184*/ "loopne",
    /*0185*/ "lsl",
    /*0186*/ "lss",
    /*0187*/ "ltr",
    /*0188*/ "lwpins",
    /*0189*/ "lwpval",
    /*018A*/ "lzcnt",
    /*018B*/ "maskmovdqu",
    /*018C*/ "maskmovq",
    /*018D*/ "maxpd",
    /*018E*/ "maxps",
    /*018F*/ "maxsd",
    /*0190*/ "maxss",
    /*0191*/ "mfence",
    /*0192*/ "minpd",
    /*0193*/ "minps",
    /*0194*/ "minsd",
    /*0195*/ "minss",
    /*0196*/ "monitor",
    /*0197*/ "mov",
    /*0198*/ "movapd",
    /*0199*/ "movaps",
    /*019A*/ "movbe",
    /*019B*/ "movd",
    /*019C*/ "movddup",
    /*019D*/ "movdq2q",
    /*019E*/ "movdqa",
    /*019F*/ "movdqu",
    /*01A0*/ "movhlps",
    /*01A1*/ "movhpd",
    /*01A2*/ "movhps",
    /*01A3*/ "movlhps",
    /*01A4*/ "movlpd",
    /*01A5*/ "movlps",
    /*01A6*/ "movmskpd",
    /*01A7*/ "movmskps",
    /*01A8*/ "movntdq",
    /*01A9*/ "movntdqa",
    /*01AA*/ "movnti",
    /*01AB*/ "movntpd",
    /*01AC*/ "movntps",
    /*01AD*/ "movntq",
    /*01AE*/ "movq",
    /*01AF*/ "movq2dq",
    /*01B0*/ "movsb",
    /*01B1*/ "movsd",
    /*01B2*/ "movshdup",
    /*01B3*/ "movsldup",
    /*01B4*/ "movsq",
    /*01B5*/ "movss",
    /*01B6*/ "movsw",
    /*01B7*/ "movsx",
    /*01B8*/ "movsxd",
    /*01B9*/ "movupd",
    /*01BA*/ "movups",
    /*01BB*/ "movzx",
    /*01BC*/ "mpsadbw",
    /*01BD*/ "mul",
    /*01BE*/ "mulpd",
    /*01BF*/ "mulps",
    /*01C0*/ "mulsd",
    /*01C1*/ "mulss",
    /*01C2*/ "mulx",
    /*01C3*/ "mwait",
    /*01C4*/ "neg",
    /*01C5*/ "nop",
    /*01C6*/ "not",
    /*01C7*/ "or",
    /*01C8*/ "orpd",
    /*01C9*/ "orps",
    /*01CA*/ "out",
    /*01CB*/ "outsb",
    /*01CC*/ "outsd",
    /*01CD*/ "outsw",
    /*01CE*/ "pabsb",
    /*01CF*/ "pabsd",
    /*01D0*/ "pabsw",
    /*01D1*/ "packssdw",
    /*01D2*/ "packsswb",
    /*01D3*/ "packusdw",
    /*01D4*/ "packuswb",
    /*01D5*/ "paddb",
    /*01D6*/ "paddd",
    /*01D7*/ "paddq",
    /*01D8*/ "paddsb",
    /*01D9*/ "paddsw",
    /*01DA*/ "paddusb",
    /*01DB*/ "paddusw",
    /*01DC*/ "paddw",
    /*01DD*/ "palignr",
    /*01DE*/ "pand",
    /*01DF*/ "pandn",
    /*01E0*/ "pause",
    /*01E1*/ "pavgb",
    /*01E2*/ "pavgusb",
    /*01E3*/ "pavgw",
    /*01E4*/ "pblendvb",
    /*01E5*/ "pblendw",
    /*01E6*/ "pclmulqdq",
    /*01E7*/ "pcmpeqb",
    /*01E8*/ "pcmpeqd",
    /*01E9*/ "pcmpeqq",
    /*01EA*/ "pcmpeqw",
    /*01EB*/ "pcmpestri",
    /*01EC*/ "pcmpestrm",
    /*01ED*/ "pcmpgtb",
    /*01EE*/ "pcmpgtd",
    /*01EF*/ "pcmpgtq",
    /*01F0*/ "pcmpgtw",
    /*01F1*/ "pcmpistri",
    /*01F2*/ "pcmpistrm",
    /*01F3*/ "pdep",
    /*01F4*/ "pext",
    /*01F5*/ "pextrb",
    /*01F6*/ "pextrd",
    /*01F7*/ "pextrq",
    /*01F8*/ "pextrw",
    /*01F9*/ "pf2id",
    /*01FA*/ "pf2iw",
    /*01FB*/ "pfacc",
    /*01FC*/ "pfadd",
    /*01FD*/ "pfcmpeq",
    /*01FE*/ "pfcmpge",
    /*01FF*/ "pfcmpgt",
    /*0200*/ "pfcpit1",
    /*0201*/ "pfmax",
    /*0202*/ "pfmin",
    /*0203*/ "pfmul",
    /*0204*/ "pfnacc",
    /*0205*/ "pfpnacc",
    /*0206*/ "pfrcp",
    /*0207*/ "pfrcpit2",
    /*0208*/ "pfrsqit1",
    /*0209*/ "pfsqrt",
    /*020A*/ "pfsub",
    /*020B*/ "pfsubr",
    /*020C*/ "phaddd",
    /*020D*/ "phaddsw",
    /*020E*/ "phaddw",
    /*020F*/ "phminposuw",
    /*0210*/ "phsubd",
    /*0211*/ "phsubsw",
    /*0212*/ "phsubw",
    /*0213*/ "pi2fd",
    /*0214*/ "pi2fw",
    /*0215*/ "pinsrb",
    /*0216*/ "pinsrd",
    /*0217*/ "pinsrq",
    /*0218*/ "pinsrw",
    /*0219*/ "pmaddubsw",
    /*021A*/ "pmaddwd",
    /*021B*/ "pmaxsb",
    /*021C*/ "pmaxsd",
    /*021D*/ "pmaxsw",
    /*021E*/ "pmaxub",
    /*021F*/ "pmaxud",
    /*0220*/ "pmaxuw",
    /*0221*/ "pminsb",
    /*0222*/ "pminsd",
    /*0223*/ "pminsw",
    /*0224*/ "pminub",
    /*0225*/ "pminud",
    /*0226*/ "pminuw",
    /*0227*/ "pmovmskb",
    /*0228*/ "pmovsxbd",
    /*0229*/ "pmovsxbq",
    /*022A*/ "pmovsxbw",
    /*022B*/ "pmovsxdq",
    /*022C*/ "pmovsxwd",
    /*022D*/ "pmovsxwq",
    /*022E*/ "pmovzxbd",
    /*022F*/ "pmovzxbq",
    /*0230*/ "pmovzxbw",
    /*0231*/ "pmovzxdq",
    /*0232*/ "pmovzxwd",
    /*0233*/ "pmovzxwq",
    /*0234*/ "pmuldq",
    /*0235*/ "pmulhrsw",
    /*0236*/ "pmulhrw",
    /*0237*/ "pmulhuw",
    /*0238*/ "pmulhw",
    /*0239*/ "pmulld",
    /*023A*/ "pmullw",
    /*023B*/ "pmuludq",
    /*023C*/ "pop",
    /*023D*/ "popa",
    /*023E*/ "popad",
    /*023F*/ "popcnt",
    /*0240*/ "popf",
    /*0241*/ "popfd",
    /*0242*/ "popfq",
    /*0243*/ "por",
    /*0244*/ "prefetch_exclusive",
    /*0245*/ "prefetch_reserved",
    /*0246*/ "prefetchnta",
    /*0247*/ "prefetcht0",
    /*0248*/ "prefetcht1",
    /*0249*/ "prefetcht2",
    /*024A*/ "prefetchw",
    /*024B*/ "prefetchwt1",
    /*024C*/ "psadbw",
    /*024D*/ "pshufb",
    /*024E*/ "pshufd",
    /*024F*/ "pshufhw",
    /*0250*/ "pshuflw",
    /*0251*/ "pshufw",
    /*0252*/ "psignb",
    /*0253*/ "psignd",
    /*0254*/ "psignw",
    /*0255*/ "pslld",
    /*0256*/ "pslldq",
    /*0257*/ "psllq",
    /*0258*/ "psllw",
    /*0259*/ "psrad",
    /*025A*/ "psraw",
    /*025B*/ "psrld",
    /*025C*/ "psrldq",
    /*025D*/ "psrlq",
    /*025E*/ "psrlw",
    /*025F*/ "psubb",
    /*0260*/ "psubd",
    /*0261*/ "psubq",
    /*0262*/ "psubsb",
    /*0263*/ "psubsw",
    /*0264*/ "psubusb",
    /*0265*/ "psubusw",
    /*0266*/ "psubw",
    /*0267*/ "pswapd",
    /*0268*/ "ptest",
    /*0269*/ "ptwrite",
    /*026A*/ "punpckhbw",
    /*026B*/ "punpckhdq",
    /*026C*/ "punpckhqdq",
    /*026D*/ "punpckhwd",
    /*026E*/ "punpcklbw",
    /*026F*/ "punpckldq",
    /*0270*/ "punpcklqdq",
    /*0271*/ "punpcklwd",
    /*0272*/ "push",
    /*0273*/ "pusha",
    /*0274*/ "pushad",
    /*0275*/ "pushf",
    /*0276*/ "pushfd",
    /*0277*/ "pushfq",
    /*0278*/ "pxor",
    /*0279*/ "rcl",
    /*027A*/ "rcpps",
    /*027B*/ "rcpss",
    /*027C*/ "rcr",
    /*027D*/ "rdfsbase",
    /*027E*/ "rdgsbase",
    /*027F*/ "rdmsr",
    /*0280*/ "rdpkru",
    /*0281*/ "rdpmc",
    /*0282*/ "rdrand",
    /*0283*/ "rdseed",
    /*0284*/ "rdsspd",
    /*0285*/ "rdsspq",
    /*0286*/ "rdtsc",
    /*0287*/ "rdtscp",
    /*0288*/ "ret",
    /*0289*/ "ret_far",
    /*028A*/ "rol",
    /*028B*/ "ror",
    /*028C*/ "rorx",
    /*028D*/ "roundpd",
    /*028E*/ "roundps",
    /*028F*/ "roundsd",
    /*0290*/ "roundss",
    /*0291*/ "rsm",
    /*0292*/ "rsqrtps",
    /*0293*/ "rsqrtss",
    /*0294*/ "rstorssp",
    /*0295*/ "sahf",
    /*0296*/ "salc",
    /*0297*/ "sar",
    /*0298*/ "sarx",
    /*0299*/ "savessp",
    /*029A*/ "sbb",
    /*029B*/ "scasb",
    /*029C*/ "scasd",
    /*029D*/ "scasq",
    /*029E*/ "scasw",
    /*029F*/ "setb",
    /*02A0*/ "setbe",
    /*02A1*/ "setl",
    /*02A2*/ "setle",
    /*02A3*/ "setnb",
    /*02A4*/ "setnbe",
    /*02A5*/ "setnl",
    /*02A6*/ "setnle",
    /*02A7*/ "setno",
    /*02A8*/ "setnp",
    /*02A9*/ "setns",
    /*02AA*/ "setnz",
    /*02AB*/ "seto",
    /*02AC*/ "setp",
    /*02AD*/ "sets",
    /*02AE*/ "setssbsy",
    /*02AF*/ "setz",
    /*02B0*/ "sfence",
    /*02B1*/ "sgdt",
    /*02B2*/ "sha1msg1",
    /*02B3*/ "sha1msg2",
    /*02B4*/ "sha1nexte",
    /*02B5*/ "sha1rnds4",
    /*02B6*/ "sha256msg1",
    /*02B7*/ "sha256msg2",
    /*02B8*/ "sha256rnds2",
    /*02B9*/ "shl",
    /*02BA*/ "shld",
    /*02BB*/ "shlx",
    /*02BC*/ "shr",
    /*02BD*/ "shrd",
    /*02BE*/ "shrx",
    /*02BF*/ "shufpd",
    /*02C0*/ "shufps",
    /*02C1*/ "sidt",
    /*02C2*/ "skinit",
    /*02C3*/ "sldt",
    /*02C4*/ "slwpcb",
    /*02C5*/ "smsw",
    /*02C6*/ "spflt",
    /*02C7*/ "sqrtpd",
    /*02C8*/ "sqrtps",
    /*02C9*/ "sqrtsd",
    /*02CA*/ "sqrtss",
    /*02CB*/ "stac",
    /*02CC*/ "stc",
    /*02CD*/ "std",
    /*02CE*/ "stgi",
    /*02CF*/ "sti",
    /*02D0*/ "stmxcsr",
    /*02D1*/ "stosb",
    /*02D2*/ "stosd",
    /*02D3*/ "stosq",
    /*02D4*/ "stosw",
    /*02D5*/ "str",
    /*02D6*/ "sub",
    /*02D7*/ "subpd",
    /*02D8*/ "subps",
    /*02D9*/ "subsd",
    /*02DA*/ "subss",
    /*02DB*/ "swapgs",
    /*02DC*/ "syscall",
    /*02DD*/ "sysenter",
    /*02DE*/ "sysexit",
    /*02DF*/ "sysret",
    /*02E0*/ "t1mskc",
    /*02E1*/ "test",
    /*02E2*/ "tzcnt",
    /*02E3*/ "tzcnti",
    /*02E4*/ "tzmsk",
    /*02E5*/ "ucomisd",
    /*02E6*/ "ucomiss",
    /*02E7*/ "ud2",
    /*02E8*/ "unpckhpd",
    /*02E9*/ "unpckhps",
    /*02EA*/ "unpcklpd",
    /*02EB*/ "unpcklps",
    /*02EC*/ "v4fmaddps",
    /*02ED*/ "v4fmaddss",
    /*02EE*/ "v4fnmaddps",
    /*02EF*/ "v4fnmaddss",
    /*02F0*/ "vaddnpd",
    /*02F1*/ "vaddnps",
    /*02F2*/ "vaddpd",
    /*02F3*/ "vaddps",
    /*02F4*/ "vaddsd",
    /*02F5*/ "vaddsetsps",
    /*02F6*/ "vaddss",
    /*02F7*/ "vaddsubpd",
    /*02F8*/ "vaddsubps",
    /*02F9*/ "vaesdec",
    /*02FA*/ "vaesdeclast",
    /*02FB*/ "vaesenc",
    /*02FC*/ "vaesenclast",
    /*02FD*/ "vaesimc",
    /*02FE*/ "vaeskeygenassist",
    /*02FF*/ "valignd",
    /*0300*/ "valignq",
    /*0301*/ "vandnpd",
    /*0302*/ "vandnps",
    /*0303*/ "vandpd",
    /*0304*/ "vandps",
    /*0305*/ "vblendmpd",
    /*0306*/ "vblendmps",
    /*0307*/ "vblendpd",
    /*0308*/ "vblendps",
    /*0309*/ "vblendvpd",
    /*030A*/ "vblendvps",
    /*030B*/ "vbroadcastf128",
    /*030C*/ "vbroadcastf32x2",
    /*030D*/ "vbroadcastf32x4",
    /*030E*/ "vbroadcastf32x8",
    /*030F*/ "vbroadcastf64x2",
    /*0310*/ "vbroadcastf64x4",
    /*0311*/ "vbroadcasti128",
    /*0312*/ "vbroadcasti32x2",
    /*0313*/ "vbroadcasti32x4",
    /*0314*/ "vbroadcasti32x8",
    /*0315*/ "vbroadcasti64x2",
    /*0316*/ "vbroadcasti64x4",
    /*0317*/ "vbroadcastsd",
    /*0318*/ "vbroadcastss",
    /*0319*/ "vcmppd",
    /*031A*/ "vcmpps",
    /*031B*/ "vcmpsd",
    /*031C*/ "vcmpss",
    /*031D*/ "vcomisd",
    /*031E*/ "vcomiss",
    /*031F*/ "vcompresspd",
    /*0320*/ "vcompressps",
    /*0321*/ "vcvtdq2pd",
    /*0322*/ "vcvtdq2ps",
    /*0323*/ "vcvtfxpntdq2ps",
    /*0324*/ "vcvtfxpntpd2dq",
    /*0325*/ "vcvtfxpntpd2udq",
    /*0326*/ "vcvtfxpntps2dq",
    /*0327*/ "vcvtfxpntps2udq",
    /*0328*/ "vcvtfxpntudq2ps",
    /*0329*/ "vcvtpd2dq",
    /*032A*/ "vcvtpd2ps",
    /*032B*/ "vcvtpd2qq",
    /*032C*/ "vcvtpd2udq",
    /*032D*/ "vcvtpd2uqq",
    /*032E*/ "vcvtph2ps",
    /*032F*/ "vcvtps2dq",
    /*0330*/ "vcvtps2pd",
    /*0331*/ "vcvtps2ph",
    /*0332*/ "vcvtps2qq",
    /*0333*/ "vcvtps2udq",
    /*0334*/ "vcvtps2uqq",
    /*0335*/ "vcvtqq2pd",
    /*0336*/ "vcvtqq2ps",
    /*0337*/ "vcvtsd2si",
    /*0338*/ "vcvtsd2ss",
    /*0339*/ "vcvtsd2usi",
    /*033A*/ "vcvtsi2sd",
    /*033B*/ "vcvtsi2ss",
    /*033C*/ "vcvtss2sd",
    /*033D*/ "vcvtss2si",
    /*033E*/ "vcvtss2usi",
    /*033F*/ "vcvttpd2dq",
    /*0340*/ "vcvttpd2qq",
    /*0341*/ "vcvttpd2udq",
    /*0342*/ "vcvttpd2uqq",
    /*0343*/ "vcvttps2dq",
    /*0344*/ "vcvttps2qq",
    /*0345*/ "vcvttps2udq",
    /*0346*/ "vcvttps2uqq",
    /*0347*/ "vcvttsd2si",
    /*0348*/ "vcvttsd2usi",
    /*0349*/ "vcvttss2si",
    /*034A*/ "vcvttss2usi",
    /*034B*/ "vcvtudq2pd",
    /*034C*/ "vcvtudq2ps",
    /*034D*/ "vcvtuqq2pd",
    /*034E*/ "vcvtuqq2ps",
    /*034F*/ "vcvtusi2sd",
    /*0350*/ "vcvtusi2ss",
    /*0351*/ "vdbpsadbw",
    /*0352*/ "vdivpd",
    /*0353*/ "vdivps",
    /*0354*/ "vdivsd",
    /*0355*/ "vdivss",
    /*0356*/ "vdppd",
    /*0357*/ "vdpps",
    /*0358*/ "verr",
    /*0359*/ "verw",
    /*035A*/ "vexp223ps",
    /*035B*/ "vexp2pd",
    /*035C*/ "vexp2ps",
    /*035D*/ "vexpandpd",
    /*035E*/ "vexpandps",
    /*035F*/ "vextractf128",
    /*0360*/ "vextractf32x4",
    /*0361*/ "vextractf32x8",
    /*0362*/ "vextractf64x2",
    /*0363*/ "vextractf64x4",
    /*0364*/ "vextracti128",
    /*0365*/ "vextracti32x4",
    /*0366*/ "vextracti32x8",
    /*0367*/ "vextracti64x2",
    /*0368*/ "vextracti64x4",
    /*0369*/ "vextractps",
    /*036A*/ "vfixupimmpd",
    /*036B*/ "vfixupimmps",
    /*036C*/ "vfixupimmsd",
    /*036D*/ "vfixupimmss",
    /*036E*/ "vfixupnanpd",
    /*036F*/ "vfixupnanps",
    /*0370*/ "vfmadd132pd",
    /*0371*/ "vfmadd132ps",
    /*0372*/ "vfmadd132sd",
    /*0373*/ "vfmadd132ss",
    /*0374*/ "vfmadd213pd",
    /*0375*/ "vfmadd213ps",
    /*0376*/ "vfmadd213sd",
    /*0377*/ "vfmadd213ss",
    /*0378*/ "vfmadd231pd",
    /*0379*/ "vfmadd231ps",
    /*037A*/ "vfmadd231sd",
    /*037B*/ "vfmadd231ss",
    /*037C*/ "vfmadd233ps",
    /*037D*/ "vfmaddpd",
    /*037E*/ "vfmaddps",
    /*037F*/ "vfmaddsd",
    /*0380*/ "vfmaddss",
    /*0381*/ "vfmaddsub132pd",
    /*0382*/ "vfmaddsub132ps",
    /*0383*/ "vfmaddsub213pd",
    /*0384*/ "vfmaddsub213ps",
    /*0385*/ "vfmaddsub231pd",
    /*0386*/ "vfmaddsub231ps",
    /*0387*/ "vfmaddsubpd",
    /*0388*/ "vfmaddsubps",
    /*0389*/ "vfmsub132pd",
    /*038A*/ "vfmsub132ps",
    /*038B*/ "vfmsub132sd",
    /*038C*/ "vfmsub132ss",
    /*038D*/ "vfmsub213pd",
    /*038E*/ "vfmsub213ps",
    /*038F*/ "vfmsub213sd",
    /*0390*/ "vfmsub213ss",
    /*0391*/ "vfmsub231pd",
    /*0392*/ "vfmsub231ps",
    /*0393*/ "vfmsub231sd",
    /*0394*/ "vfmsub231ss",
    /*0395*/ "vfmsubadd132pd",
    /*0396*/ "vfmsubadd132ps",
    /*0397*/ "vfmsubadd213pd",
    /*0398*/ "vfmsubadd213ps",
    /*0399*/ "vfmsubadd231pd",
    /*039A*/ "vfmsubadd231ps",
    /*039B*/ "vfmsubaddpd",
    /*039C*/ "vfmsubaddps",
    /*039D*/ "vfmsubpd",
    /*039E*/ "vfmsubps",
    /*039F*/ "vfmsubsd",
    /*03A0*/ "vfmsubss",
    /*03A1*/ "vfnmadd132pd",
    /*03A2*/ "vfnmadd132ps",
    /*03A3*/ "vfnmadd132sd",
    /*03A4*/ "vfnmadd132ss",
    /*03A5*/ "vfnmadd213pd",
    /*03A6*/ "vfnmadd213ps",
    /*03A7*/ "vfnmadd213sd",
    /*03A8*/ "vfnmadd213ss",
    /*03A9*/ "vfnmadd231pd",
    /*03AA*/ "vfnmadd231ps",
    /*03AB*/ "vfnmadd231sd",
    /*03AC*/ "vfnmadd231ss",
    /*03AD*/ "vfnmaddpd",
    /*03AE*/ "vfnmaddps",
    /*03AF*/ "vfnmaddsd",
    /*03B0*/ "vfnmaddss",
    /*03B1*/ "vfnmsub132pd",
    /*03B2*/ "vfnmsub132ps",
    /*03B3*/ "vfnmsub132sd",
    /*03B4*/ "vfnmsub132ss",
    /*03B5*/ "vfnmsub213pd",
    /*03B6*/ "vfnmsub213ps",
    /*03B7*/ "vfnmsub213sd",
    /*03B8*/ "vfnmsub213ss",
    /*03B9*/ "vfnmsub231pd",
    /*03BA*/ "vfnmsub231ps",
    /*03BB*/ "vfnmsub231sd",
    /*03BC*/ "vfnmsub231ss",
    /*03BD*/ "vfnmsubpd",
    /*03BE*/ "vfnmsubps",
    /*03BF*/ "vfnmsubsd",
    /*03C0*/ "vfnmsubss",
    /*03C1*/ "vfpclasspd",
    /*03C2*/ "vfpclassps",
    /*03C3*/ "vfpclasssd",
    /*03C4*/ "vfpclassss",
    /*03C5*/ "vfrczpd",
    /*03C6*/ "vfrczps",
    /*03C7*/ "vfrczsd",
    /*03C8*/ "vfrczss",
    /*03C9*/ "vgatherdpd",
    /*03CA*/ "vgatherdps",
    /*03CB*/ "vgatherpf0dpd",
    /*03CC*/ "vgatherpf0dps",
    /*03CD*/ "vgatherpf0hintdpd",
    /*03CE*/ "vgatherpf0hintdps",
    /*03CF*/ "vgatherpf0qpd",
    /*03D0*/ "vgatherpf0qps",
    /*03D1*/ "vgatherpf1dpd",
    /*03D2*/ "vgatherpf1dps",
    /*03D3*/ "vgatherpf1qpd",
    /*03D4*/ "vgatherpf1qps",
    /*03D5*/ "vgatherqpd",
    /*03D6*/ "vgatherqps",
    /*03D7*/ "vgetexppd",
    /*03D8*/ "vgetexpps",
    /*03D9*/ "vgetexpsd",
    /*03DA*/ "vgetexpss",
    /*03DB*/ "vgetmantpd",
    /*03DC*/ "vgetmantps",
    /*03DD*/ "vgetmantsd",
    /*03DE*/ "vgetmantss",
    /*03DF*/ "vgmaxabsps",
    /*03E0*/ "vgmaxpd",
    /*03E1*/ "vgmaxps",
    /*03E2*/ "vgminpd",
    /*03E3*/ "vgminps",
    /*03E4*/ "vhaddpd",
    /*03E5*/ "vhaddps",
    /*03E6*/ "vhsubpd",
    /*03E7*/ "vhsubps",
    /*03E8*/ "vinsertf128",
    /*03E9*/ "vinsertf32x4",
    /*03EA*/ "vinsertf32x8",
    /*03EB*/ "vinsertf64x2",
    /*03EC*/ "vinsertf64x4",
    /*03ED*/ "vinserti128",
    /*03EE*/ "vinserti32x4",
    /*03EF*/ "vinserti32x8",
    /*03F0*/ "vinserti64x2",
    /*03F1*/ "vinserti64x4",
    /*03F2*/ "vinsertps",
    /*03F3*/ "vlddqu",
    /*03F4*/ "vldmxcsr",
    /*03F5*/ "vloadunpackhd",
    /*03F6*/ "vloadunpackhpd",
    /*03F7*/ "vloadunpackhps",
    /*03F8*/ "vloadunpackhq",
    /*03F9*/ "vloadunpackld",
    /*03FA*/ "vloadunpacklpd",
    /*03FB*/ "vloadunpacklps",
    /*03FC*/ "vloadunpacklq",
    /*03FD*/ "vlog2ps",
    /*03FE*/ "vmaskmovdqu",
    /*03FF*/ "vmaskmovpd",
    /*0400*/ "vmaskmovps",
    /*0401*/ "vmaxpd",
    /*0402*/ "vmaxps",
    /*0403*/ "vmaxsd",
    /*0404*/ "vmaxss",
    /*0405*/ "vmcall",
    /*0406*/ "vmclear",
    /*0407*/ "vmfunc",
    /*0408*/ "vminpd",
    /*0409*/ "vminps",
    /*040A*/ "vminsd",
    /*040B*/ "vminss",
    /*040C*/ "vmlaunch",
    /*040D*/ "vmload",
    /*040E*/ "vmmcall",
    /*040F*/ "vmovapd",
    /*0410*/ "vmovaps",
    /*0411*/ "vmovd",
    /*0412*/ "vmovddup",
    /*0413*/ "vmovdqa",
    /*0414*/ "vmovdqa32",
    /*0415*/ "vmovdqa64",
    /*0416*/ "vmovdqu",
    /*0417*/ "vmovdqu16",
    /*0418*/ "vmovdqu32",
    /*0419*/ "vmovdqu64",
    /*041A*/ "vmovdqu8",
    /*041B*/ "vmovhlps",
    /*041C*/ "vmovhpd",
    /*041D*/ "vmovhps",
    /*041E*/ "vmovlhps",
    /*041F*/ "vmovlpd",
    /*0420*/ "vmovlps",
    /*0421*/ "vmovmskpd",
    /*0422*/ "vmovmskps",
    /*0423*/ "vmovnrapd",
    /*0424*/ "vmovnraps",
    /*0425*/ "vmovnrngoapd",
    /*0426*/ "vmovnrngoaps",
    /*0427*/ "vmovntdq",
    /*0428*/ "vmovntdqa",
    /*0429*/ "vmovntpd",
    /*042A*/ "vmovntps",
    /*042B*/ "vmovq",
    /*042C*/ "vmovsd",
    /*042D*/ "vmovshdup",
    /*042E*/ "vmovsldup",
    /*042F*/ "vmovss",
    /*0430*/ "vmovupd",
    /*0431*/ "vmovups",
    /*0432*/ "vmpsadbw",
    /*0433*/ "vmptrld",
    /*0434*/ "vmptrst",
    /*0435*/ "vmread",
    /*0436*/ "vmresume",
    /*0437*/ "vmrun",
    /*0438*/ "vmsave",
    /*0439*/ "vmulpd",
    /*043A*/ "vmulps",
    /*043B*/ "vmulsd",
    /*043C*/ "vmulss",
    /*043D*/ "vmwrite",
    /*043E*/ "vmxoff",
    /*043F*/ "vmxon",
    /*0440*/ "vorpd",
    /*0441*/ "vorps",
    /*0442*/ "vp4dpwssd",
    /*0443*/ "vp4dpwssds",
    /*0444*/ "vpabsb",
    /*0445*/ "vpabsd",
    /*0446*/ "vpabsq",
    /*0447*/ "vpabsw",
    /*0448*/ "vpackssdw",
    /*0449*/ "vpacksswb",
    /*044A*/ "vpackstorehd",
    /*044B*/ "vpackstorehpd",
    /*044C*/ "vpackstorehps",
    /*044D*/ "vpackstorehq",
    /*044E*/ "vpackstoreld",
    /*044F*/ "vpackstorelpd",
    /*0450*/ "vpackstorelps",
    /*0451*/ "vpackstorelq",
    /*0452*/ "vpackusdw",
    /*0453*/ "vpackuswb",
    /*0454*/ "vpadcd",
    /*0455*/ "vpaddb",
    /*0456*/ "vpaddd",
    /*0457*/ "vpaddq",
    /*0458*/ "vpaddsb",
    /*0459*/ "vpaddsetcd",
    /*045A*/ "vpaddsetsd",
    /*045B*/ "vpaddsw",
    /*045C*/ "vpaddusb",
    /*045D*/ "vpaddusw",
    /*045E*/ "vpaddw",
    /*045F*/ "vpalignr",
    /*0460*/ "vpand",
    /*0461*/ "vpandd",
    /*0462*/ "vpandn",
    /*0463*/ "vpandnd",
    /*0464*/ "vpandnq",
    /*0465*/ "vpandq",
    /*0466*/ "vpavgb",
    /*0467*/ "vpavgw",
    /*0468*/ "vpblendd",
    /*0469*/ "vpblendmb",
    /*046A*/ "vpblendmd",
    /*046B*/ "vpblendmq",
    /*046C*/ "vpblendmw",
    /*046D*/ "vpblendvb",
    /*046E*/ "vpblendw",
    /*046F*/ "vpbroadcastb",
    /*0470*/ "vpbroadcastd",
    /*0471*/ "vpbroadcastmb2q",
    /*0472*/ "vpbroadcastmw2d",
    /*0473*/ "vpbroadcastq",
    /*0474*/ "vpbroadcastw",
    /*0475*/ "vpclmulqdq",
    /*0476*/ "vpcmov",
    /*0477*/ "vpcmpb",
    /*0478*/ "vpcmpd",
    /*0479*/ "vpcmpeqb",
    /*047A*/ "vpcmpeqd",
    /*047B*/ "vpcmpeqq",
    /*047C*/ "vpcmpeqw",
    /*047D*/ "vpcmpestri",
    /*047E*/ "vpcmpestrm",
    /*047F*/ "vpcmpgtb",
    /*0480*/ "vpcmpgtd",
    /*0481*/ "vpcmpgtq",
    /*0482*/ "vpcmpgtw",
    /*0483*/ "vpcmpistri",
    /*0484*/ "vpcmpistrm",
    /*0485*/ "vpcmpltd",
    /*0486*/ "vpcmpq",
    /*0487*/ "vpcmpub",
    /*0488*/ "vpcmpud",
    /*0489*/ "vpcmpuq",
    /*048A*/ "vpcmpuw",
    /*048B*/ "vpcmpw",
    /*048C*/ "vpcomb",
    /*048D*/ "vpcomd",
    /*048E*/ "vpcompressd",
    /*048F*/ "vpcompressq",
    /*0490*/ "vpcomq",
    /*0491*/ "vpcomub",
    /*0492*/ "vpcomud",
    /*0493*/ "vpcomuq",
    /*0494*/ "vpcomuw",
    /*0495*/ "vpcomw",
    /*0496*/ "vpconflictd",
    /*0497*/ "vpconflictq",
    /*0498*/ "vperm2f128",
    /*0499*/ "vperm2i128",
    /*049A*/ "vpermb",
    /*049B*/ "vpermd",
    /*049C*/ "vpermf32x4",
    /*049D*/ "vpermi2b",
    /*049E*/ "vpermi2d",
    /*049F*/ "vpermi2pd",
    /*04A0*/ "vpermi2ps",
    /*04A1*/ "vpermi2q",
    /*04A2*/ "vpermi2w",
    /*04A3*/ "vpermil2pd",
    /*04A4*/ "vpermil2ps",
    /*04A5*/ "vpermilpd",
    /*04A6*/ "vpermilps",
    /*04A7*/ "vpermpd",
    /*04A8*/ "vpermps",
    /*04A9*/ "vpermq",
    /*04AA*/ "vpermt2b",
    /*04AB*/ "vpermt2d",
    /*04AC*/ "vpermt2pd",
    /*04AD*/ "vpermt2ps",
    /*04AE*/ "vpermt2q",
    /*04AF*/ "vpermt2w",
    /*04B0*/ "vpermw",
    /*04B1*/ "vpexpandd",
    /*04B2*/ "vpexpandq",
    /*04B3*/ "vpextrb",
    /*04B4*/ "vpextrd",
    /*04B5*/ "vpextrq",
    /*04B6*/ "vpextrw",
    /*04B7*/ "vpgatherdd",
    /*04B8*/ "vpgatherdq",
    /*04B9*/ "vpgatherqd",
    /*04BA*/ "vpgatherqq",
    /*04BB*/ "vphaddbd",
    /*04BC*/ "vphaddbq",
    /*04BD*/ "vphaddbw",
    /*04BE*/ "vphaddd",
    /*04BF*/ "vphadddq",
    /*04C0*/ "vphaddsw",
    /*04C1*/ "vphaddubd",
    /*04C2*/ "vphaddubq",
    /*04C3*/ "vphaddubw",
    /*04C4*/ "vphaddudq",
    /*04C5*/ "vphadduwd",
    /*04C6*/ "vphadduwq",
    /*04C7*/ "vphaddw",
    /*04C8*/ "vphaddwd",
    /*04C9*/ "vphaddwq",
    /*04CA*/ "vphminposuw",
    /*04CB*/ "vphsubbw",
    /*04CC*/ "vphsubd",
    /*04CD*/ "vphsubdq",
    /*04CE*/ "vphsubsw",
    /*04CF*/ "vphsubw",
    /*04D0*/ "vphsubwd",
    /*04D1*/ "vpinsrb",
    /*04D2*/ "vpinsrd",
    /*04D3*/ "vpinsrq",
    /*04D4*/ "vpinsrw",
    /*04D5*/ "vplzcntd",
    /*04D6*/ "vplzcntq",
    /*04D7*/ "vpmacsdd",
    /*04D8*/ "vpmacsdqh",
    /*04D9*/ "vpmacsdql",
    /*04DA*/ "vpmacssdd",
    /*04DB*/ "vpmacssdqh",
    /*04DC*/ "vpmacssdql",
    /*04DD*/ "vpmacsswd",
    /*04DE*/ "vpmacssww",
    /*04DF*/ "vpmacswd",
    /*04E0*/ "vpmacsww",
    /*04E1*/ "vpmadcsswd",
    /*04E2*/ "vpmadcswd",
    /*04E3*/ "vpmadd231d",
    /*04E4*/ "vpmadd233d",
    /*04E5*/ "vpmadd52huq",
    /*04E6*/ "vpmadd52luq",
    /*04E7*/ "vpmaddubsw",
    /*04E8*/ "vpmaddwd",
    /*04E9*/ "vpmaskmovd",
    /*04EA*/ "vpmaskmovq",
    /*04EB*/ "vpmaxsb",
    /*04EC*/ "vpmaxsd",
    /*04ED*/ "vpmaxsq",
    /*04EE*/ "vpmaxsw",
    /*04EF*/ "vpmaxub",
    /*04F0*/ "vpmaxud",
    /*04F1*/ "vpmaxuq",
    /*04F2*/ "vpmaxuw",
    /*04F3*/ "vpminsb",
    /*04F4*/ "vpminsd",
    /*04F5*/ "vpminsq",
    /*04F6*/ "vpminsw",
    /*04F7*/ "vpminub",
    /*04F8*/ "vpminud",
    /*04F9*/ "vpminuq",
    /*04FA*/ "vpminuw",
    /*04FB*/ "vpmovb2m",
    /*04FC*/ "vpmovd2m",
    /*04FD*/ "vpmovdb",
    /*04FE*/ "vpmovdw",
    /*04FF*/ "vpmovm2b",
    /*0500*/ "vpmovm2d",
    /*0501*/ "vpmovm2q",
    /*0502*/ "vpmovm2w",
    /*0503*/ "vpmovmskb",
    /*0504*/ "vpmovq2m",
    /*0505*/ "vpmovqb",
    /*0506*/ "vpmovqd",
    /*0507*/ "vpmovqw",
    /*0508*/ "vpmovsdb",
    /*0509*/ "vpmovsdw",
    /*050A*/ "vpmovsqb",
    /*050B*/ "vpmovsqd",
    /*050C*/ "vpmovsqw",
    /*050D*/ "vpmovswb",
    /*050E*/ "vpmovsxbd",
    /*050F*/ "vpmovsxbq",
    /*0510*/ "vpmovsxbw",
    /*0511*/ "vpmovsxdq",
    /*0512*/ "vpmovsxwd",
    /*0513*/ "vpmovsxwq",
    /*0514*/ "vpmovusdb",
    /*0515*/ "vpmovusdw",
    /*0516*/ "vpmovusqb",
    /*0517*/ "vpmovusqd",
    /*0518*/ "vpmovusqw",
    /*0519*/ "vpmovuswb",
    /*051A*/ "vpmovw2m",
    /*051B*/ "vpmovwb",
    /*051C*/ "vpmovzxbd",
    /*051D*/ "vpmovzxbq",
    /*051E*/ "vpmovzxbw",
    /*051F*/ "vpmovzxdq",
    /*0520*/ "vpmovzxwd",
    /*0521*/ "vpmovzxwq",
    /*0522*/ "vpmuldq",
    /*0523*/ "vpmulhd",
    /*0524*/ "vpmulhrsw",
    /*0525*/ "vpmulhud",
    /*0526*/ "vpmulhuw",
    /*0527*/ "vpmulhw",
    /*0528*/ "vpmulld",
    /*0529*/ "vpmullq",
    /*052A*/ "vpmullw",
    /*052B*/ "vpmultishiftqb",
    /*052C*/ "vpmuludq",
    /*052D*/ "vpopcntd",
    /*052E*/ "vpopcntq",
    /*052F*/ "vpor",
    /*0530*/ "vpord",
    /*0531*/ "vporq",
    /*0532*/ "vpperm",
    /*0533*/ "vprefetch0",
    /*0534*/ "vprefetch1",
    /*0535*/ "vprefetch2",
    /*0536*/ "vprefetche0",
    /*0537*/ "vprefetche1",
    /*0538*/ "vprefetche2",
    /*0539*/ "vprefetchenta",
    /*053A*/ "vprefetchnta",
    /*053B*/ "vprold",
    /*053C*/ "vprolq",
    /*053D*/ "vprolvd",
    /*053E*/ "vprolvq",
    /*053F*/ "vprord",
    /*0540*/ "vprorq",
    /*0541*/ "vprorvd",
    /*0542*/ "vprorvq",
    /*0543*/ "vprotb",
    /*0544*/ "vprotd",
    /*0545*/ "vprotq",
    /*0546*/ "vprotw",
    /*0547*/ "vpsadbw",
    /*0548*/ "vpsbbd",
    /*0549*/ "vpsbbrd",
    /*054A*/ "vpscatterdd",
    /*054B*/ "vpscatterdq",
    /*054C*/ "vpscatterqd",
    /*054D*/ "vpscatterqq",
    /*054E*/ "vpshab",
    /*054F*/ "vpshad",
    /*0550*/ "vpshaq",
    /*0551*/ "vpshaw",
    /*0552*/ "vpshlb",
    /*0553*/ "vpshld",
    /*0554*/ "vpshlq",
    /*0555*/ "vpshlw",
    /*0556*/ "vpshufb",
    /*0557*/ "vpshufd",
    /*0558*/ "vpshufhw",
    /*0559*/ "vpshuflw",
    /*055A*/ "vpsignb",
    /*055B*/ "vpsignd",
    /*055C*/ "vpsignw",
    /*055D*/ "vpslld",
    /*055E*/ "vpslldq",
    /*055F*/ "vpsllq",
    /*0560*/ "vpsllvd",
    /*0561*/ "vpsllvq",
    /*0562*/ "vpsllvw",
    /*0563*/ "vpsllw",
    /*0564*/ "vpsrad",
    /*0565*/ "vpsraq",
    /*0566*/ "vpsravd",
    /*0567*/ "vpsravq",
    /*0568*/ "vpsravw",
    /*0569*/ "vpsraw",
    /*056A*/ "vpsrld",
    /*056B*/ "vpsrldq",
    /*056C*/ "vpsrlq",
    /*056D*/ "vpsrlvd",
    /*056E*/ "vpsrlvq",
    /*056F*/ "vpsrlvw",
    /*0570*/ "vpsrlw",
    /*0571*/ "vpsubb",
    /*0572*/ "vpsubd",
    /*0573*/ "vpsubq",
    /*0574*/ "vpsubrd",
    /*0575*/ "vpsubrsetbd",
    /*0576*/ "vpsubsb",
    /*0577*/ "vpsubsetbd",
    /*0578*/ "vpsubsw",
    /*0579*/ "vpsubusb",
    /*057A*/ "vpsubusw",
    /*057B*/ "vpsubw",
    /*057C*/ "vpternlogd",
    /*057D*/ "vpternlogq",
    /*057E*/ "vptest",
    /*057F*/ "vptestmb",
    /*0580*/ "vptestmd",
    /*0581*/ "vptestmq",
    /*0582*/ "vptestmw",
    /*0583*/ "vptestnmb",
    /*0584*/ "vptestnmd",
    /*0585*/ "vptestnmq",
    /*0586*/ "vptestnmw",
    /*0587*/ "vpunpckhbw",
    /*0588*/ "vpunpckhdq",
    /*0589*/ "vpunpckhqdq",
    /*058A*/ "vpunpckhwd",
    /*058B*/ "vpunpcklbw",
    /*058C*/ "vpunpckldq",
    /*058D*/ "vpunpcklqdq",
    /*058E*/ "vpunpcklwd",
    /*058F*/ "vpxor",
    /*0590*/ "vpxord",
    /*0591*/ "vpxorq",
    /*0592*/ "vrangepd",
    /*0593*/ "vrangeps",
    /*0594*/ "vrangesd",
    /*0595*/ "vrangess",
    /*0596*/ "vrcp14pd",
    /*0597*/ "vrcp14ps",
    /*0598*/ "vrcp14sd",
    /*0599*/ "vrcp14ss",
    /*059A*/ "vrcp23ps",
    /*059B*/ "vrcp28pd",
    /*059C*/ "vrcp28ps",
    /*059D*/ "vrcp28sd",
    /*059E*/ "vrcp28ss",
    /*059F*/ "vrcpps",
    /*05A0*/ "vrcpss",
    /*05A1*/ "vreducepd",
    /*05A2*/ "vreduceps",
    /*05A3*/ "vreducesd",
    /*05A4*/ "vreducess",
    /*05A5*/ "vrndfxpntpd",
    /*05A6*/ "vrndfxpntps",
    /*05A7*/ "vrndscalepd",
    /*05A8*/ "vrndscaleps",
    /*05A9*/ "vrndscalesd",
    /*05AA*/ "vrndscaless",
    /*05AB*/ "vroundpd",
    /*05AC*/ "vroundps",
    /*05AD*/ "vroundsd",
    /*05AE*/ "vroundss",
    /*05AF*/ "vrsqrt14pd",
    /*05B0*/ "vrsqrt14ps",
    /*05B1*/ "vrsqrt14sd",
    /*05B2*/ "vrsqrt14ss",
    /*05B3*/ "vrsqrt23ps",
    /*05B4*/ "vrsqrt28pd",
    /*05B5*/ "vrsqrt28ps",
    /*05B6*/ "vrsqrt28sd",
    /*05B7*/ "vrsqrt28ss",
    /*05B8*/ "vrsqrtps",
    /*05B9*/ "vrsqrtss",
    /*05BA*/ "vscalefpd",
    /*05BB*/ "vscalefps",
    /*05BC*/ "vscalefsd",
    /*05BD*/ "vscalefss",
    /*05BE*/ "vscaleps",
    /*05BF*/ "vscatterdpd",
    /*05C0*/ "vscatterdps",
    /*05C1*/ "vscatterpf0dpd",
    /*05C2*/ "vscatterpf0dps",
    /*05C3*/ "vscatterpf0hintdpd",
    /*05C4*/ "vscatterpf0hintdps",
    /*05C5*/ "vscatterpf0qpd",
    /*05C6*/ "vscatterpf0qps",
    /*05C7*/ "vscatterpf1dpd",
    /*05C8*/ "vscatterpf1dps",
    /*05C9*/ "vscatterpf1qpd",
    /*05CA*/ "vscatterpf1qps",
    /*05CB*/ "vscatterqpd",
    /*05CC*/ "vscatterqps",
    /*05CD*/ "vshuff32x4",
    /*05CE*/ "vshuff64x2",
    /*05CF*/ "vshufi32x4",
    /*05D0*/ "vshufi64x2",
    /*05D1*/ "vshufpd",
    /*05D2*/ "vshufps",
    /*05D3*/ "vsqrtpd",
    /*05D4*/ "vsqrtps",
    /*05D5*/ "vsqrtsd",
    /*05D6*/ "vsqrtss",
    /*05D7*/ "vstmxcsr",
    /*05D8*/ "vsubpd",
    /*05D9*/ "vsubps",
    /*05DA*/ "vsubrpd",
    /*05DB*/ "vsubrps",
    /*05DC*/ "vsubsd",
    /*05DD*/ "vsubss",
    /*05DE*/ "vtestpd",
    /*05DF*/ "vtestps",
    /*05E0*/ "vucomisd",
    /*05E1*/ "vucomiss",
    /*05E2*/ "vunpckhpd",
    /*05E3*/ "vunpckhps",
    /*05E4*/ "vunpcklpd",
    /*05E5*/ "vunpcklps",
    /*05E6*/ "vxorpd",
    /*05E7*/ "vxorps",
    /*05E8*/ "vzeroall",
    /*05E9*/ "vzeroupper",
    /*05EA*/ "wbinvd",
    /*05EB*/ "wrfsbase",
    /*05EC*/ "wrgsbase",
    /*05ED*/ "wrmsr",
    /*05EE*/ "wrpkru",
    /*05EF*/ "wrssd",
    /*05F0*/ "wrssq",
    /*05F1*/ "wrussd",
    /*05F2*/ "wrussq",
    /*05F3*/ "xadd",
    /*05F4*/ "xchg",
    /*05F5*/ "xgetbv",
    /*05F6*/ "xlat",
    /*05F7*/ "xor",
    /*05F8*/ "xorpd",
    /*05F9*/ "xorps",
    /*05FA*/ "xrstor",
    /*05FB*/ "xrstor64",
    /*05FC*/ "xrstors",
    /*05FD*/ "xrstors64",
    /*05FE*/ "xsave",
    /*05FF*/ "xsave64",
    /*0600*/ "xsavec",
    /*0601*/ "xsavec64",
    /*0602*/ "xsaveopt",
    /*0603*/ "xsaveopt64",
    /*0604*/ "xsaves",
    /*0605*/ "xsaves64",
    /*0606*/ "xsetbv"
};