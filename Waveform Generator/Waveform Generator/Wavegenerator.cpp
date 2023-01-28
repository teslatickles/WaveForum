#include "Waveform.h"

int main() {
	Waveform square_wave = Waveform(Waveform::Wavetype::SQUARE);
	Waveform triangle_wave = Waveform(Waveform::Wavetype::TRIANGLE);

	square_wave.log();
	triangle_wave.log();

	return 0;
}
