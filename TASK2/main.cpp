#include "RouteCipher.h"

void check(const string& text, const string& key)
{
    try {
        string cipherText;
        string decryptedText;
        RouteCipher cipher(RouteCipher::getValidKey(key));
        cipherText = cipher.encrypt(text);
        decryptedText = cipher.decrypt(cipherText);
        cout<<"Key:"<<key<<endl;
        cout<<"Text:"<<text<<endl;
        cout<<"Encrypted text: "<<cipherText<<endl;
        cout<<"Decrypted text: "<<decryptedText<<endl;
    } catch (const cipher_error & e) {
        cerr<<"Error: "<<e.what()<<endl;
    }
    cout<<""<<endl;
}


int main()
{
    check("PIXEL","0");
	cout << "-------------" << endl;
    check("PIXEL","");
	cout << "-------------" << endl;
    check("ЯТУТЖИВУ","3");
	cout << "-------------" << endl;
    check("PIXEL","3");
	cout << "-------------" << endl;
    check("12345678выаврпапо","3");
	cout << "-------------" << endl;
	check("","3");
	cout << "-------------" << endl;
    return 0;
}
