
# 기능 요구사항

## parser 

이게 아마도 90%

### instruction parsing.

- byte 읽어들이면서 다음에 나올 byte 예측 후 분석.
- 명령어 1개당 node로 해서 관리. 

일단, 32bit/64bit 구별은 AMD64가 잘 셜계된 것을 믿고.. 기본 size 관련해서(prefix) 신경 써주면 될 거 같음.

- instruction 에 대한 정보를 담고 있는 list를 하나 만들어야함. -> 명령어가 갖을 수 있는 특성 정리 후 최적!의 format 설계!
- [Prefix] [Opcode] [Mod R/M] [SIG] [DISP] [Imm] 이 순서로 되어있음.
- Prefix 는 Opcode랑 겹치지 않으므로, 둘이 같이 취급함.
- 그 뒤의 값들은 field 값에 따라 분기하면 됨.

### pe section parsing

- PE 에서 code section이 어디서 시작하는지, data영역 data들 불러올 수 있게.
- PE header 에서 의미있는 값 불러오는 함수
- 사실상 기본적인 disassembler에서는 그냥 PE인지 확인, code section 주소랑 32/64bit 구별만 하면 됨.


## disassemble

- parser에서 예쁘게 정리해준 data를 형식에 맞게 배치 후 string return ^^

 
