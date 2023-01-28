#include "Waveform.h"

Waveform::Waveform(Wavetype wtype) {
	id = generate_hex(8);
	wavetype = wtype;
	active = 1;
	frequency = FREQ_DEFAULT;
	duty = DUTY_DEFAULT;
	amplitude = AMP_DEFAULT;
}

Waveform::~Waveform() {}