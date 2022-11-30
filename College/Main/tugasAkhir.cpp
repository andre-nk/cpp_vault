
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

struct studentRecord
{
	string namaSiswa;
	int tugas1;
	int tugas2;
	int UTS;
	int UAS;
};

double nilai(struct studentRecord &record)
{
	// cout << "student: " << record.namaSiswa <<  " adding tugas1: " << record.tugas1 << " tugas2: "
	//		<< record.tugas2 << " midterm Exam: " << record.UTS << " and final exam: " << record.UAS << endl;
	int totalTugas = (record.tugas1 + record.tugas2) / 2;
	double result = (0.4 * record.UAS) + (0.4 * record.UTS) + (0.2 * totalTugas);
	return result;
}

char nilaiHuruf(double result, double rerata, double stdev)
{
	char grade = 'N';
	if (result > rerata + 2 * stdev)
	{
		grade = 'A';
	}
	else if (result > rerata + stdev)
	{
		grade = 'B';
	}
	else if (result > rerata)
	{
		grade = 'C';
	}
	else if (result > rerata - stdev)
	{
		grade = 'D';
	}
	else if (result > rerata - 2 * stdev)
	{
		grade = 'E';
	}
	else
		grade = 'F';
	return grade;
}

int main()
{
	// read in the student scores from a file
	ifstream ifs("studentRecords.txt");
	string namaSiswa;
	int t1, t2, uts, uas, banyakSiswa;
	double total, rerata, stdev = 0;
	struct studentRecord records[banyakSiswa];

	if (ifs.fail())
	{
		cout << "Gagal membuka file data siswa (studentRecords.txt)" << endl;
		exit(1);
	}

	int banyak = 0;
	while (!ifs.eof())
	{
		ifs >> namaSiswa >> t1 >> t2 >> uts >> uas;
		//	    cout << "student: " << namaSiswa <<  " adding tugas1: " << t1 << " tugas: "
		//				<< t2 << " midterm Exam: " << uts << " and final exam: " << uas << endl;
		records[banyak].namaSiswa = namaSiswa;
		records[banyak].tugas1 = t1;
		records[banyak].tugas2 = t2;
		records[banyak].UTS = uts;
		records[banyak].UAS = uas;
		banyak++;
	}

	cout << "\t    DAFTAR NILAI SISWA " << endl;
	cout << "\t==========================" << endl;
	cout << "\t Masukkan banyak data: ";
	cin >> banyakSiswa;

	for (int k = 0; k < banyak; k++)
	{
		total += nilai(records[k]);
	}
	rerata = ((double)total) / banyak;

	for (int l = 0; l < banyak; l++)
	{
		stdev += pow(nilai(records[l]) - rerata, 2);
	}
	stdev /= banyak;
	stdev = sqrt(stdev);

	cout << "Rata-rata nilai adalah " << rerata << endl;
	cout << "Standard deviasi adalah " << stdev << endl;

	cout << banyak << " data siswa dibaca" << endl;
	for (int j = 0; j < banyak; j++)
	{
		double result = nilai(records[j]);
		cout << records[j].namaSiswa << " mendapatkan nilai angka " << result << " dengan nilai huruf " << nilaiHuruf(result, rerata, stdev) << endl;
	}

	ofstream outfile;

	outfile.open("hasilAkhir.txt");

	if (outfile.is_open())
	{
		outfile << "Rata-rata nilai adalah " << rerata << endl;
		outfile << "Standard deviasi adalah " << stdev << endl;
		for (int j = 0; j < banyak; j++)
		{
			double result = nilai(records[j]);
			outfile << records[j].namaSiswa << " mendapatkan nilai angka " << result << " dengan nilai huruf " << nilaiHuruf(result, rerata, stdev) << endl;
		}
		outfile.close();
	}
	else
		cout << "ERROR";
}