#ifndef ANAK_H
#define ANAK_H

class Anak {
public:
	string nama;
	Anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}
	~Anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif
