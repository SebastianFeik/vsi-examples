#include <string.h>
#ifdef _VSI_RUNTIME_
#include <vsi/vsi_runtime.hh>

int main() {
	get_vsi_rt()->startup();
}
#endif

char s[16] = "Echo Server... ";
char junk[16];
void process_tcp1(
		char in1[256],
		char out1[256]){     
	for(int i = 0; i < 256; i++) {
		if (i < 16 ) out1[i] = s[i];
		else out1[i] = in1[i-16];
	}
	for (int i = 0; i < 16; i++)
		junk[i] = in1[240+i];
}
