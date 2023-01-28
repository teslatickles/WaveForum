#ifndef WAVEFORM_H
#define WAVEFORM_H

#include <iostream>
#include <string>

#include "Waveform.h"
#include "Guidd.h"


class Waveform {
public:
	enum class Wavetype {
		SQUARE,
		NOISE,
		TRIANGLE,
		SINUSOIDAL
	};

	Waveform(Waveform::Wavetype wavetype);
	~Waveform();

	void log() {
		print(this->id);
		print(wavetype_to_string(this->wavetype));
		print(this->active);
		print(this->frequency);
		print(this->duty);
		print(this->amplitude);
		std::cout << std::endl;
	}

private:
	std::string		id;
	Wavetype		wavetype;
	bool			active;
	float			frequency;
	float           duty;
	float			amplitude;

	const static int FREQ_DEFAULT = 10000;
	const static int DUTY_DEFAULT = 50;
	const static int AMP_DEFAULT = 75;

	void set_freq(int new_freq) {
		this->frequency = new_freq;
	}

	void set_duty(int new_duty) {
		this->duty = new_duty;
	}

	void set_active(bool should_be_active) {
		this->active = should_be_active;
	}

	void set_amplitude(int new_amplitude) {
		this->amplitude = new_amplitude;
	}

	const std::string wavetype_to_string(Wavetype wt) {
		Wavetype w;
		w = wt;
		switch (w)
		{
		case Wavetype::SQUARE:		return "Square";
		case Wavetype::TRIANGLE:	return "Triangle";
		case Wavetype::NOISE:		return "Noise";
		case Wavetype::SINUSOIDAL:	return "Sinusoidal";
		default:					return "[Unknown Wavetype]";
		}
	}

	void print(auto thing) {
		std::cout << thing << std::endl;
	}
};
#endif