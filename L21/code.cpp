#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1. Factory Method Pattern
class Document {
public:
    virtual void create() = 0;
    virtual ~Document() {}
};

class PDFDocument : public Document {
public:
    void create() override {
        cout << "Creating PDF Document" << endl;
    }
};

class WordDocument : public Document {
public:
    void create() override {
        cout << "Creating Word Document" << endl;
    }
};

class DocumentFactory {
public:
    virtual Document* createDocument() = 0;
    virtual ~DocumentFactory() {}
};

class PDFFactory : public DocumentFactory {
public:
    Document* createDocument() override {
        return new PDFDocument();
    }
};

class WordFactory : public DocumentFactory {
public:
    Document* createDocument() override {
        return new WordDocument();
    }
};

// 2. Singleton Pattern
class Database {
private:
    static Database* instance;
    string connectionString;
    
    Database() {
        connectionString = "Default Connection";
    }
    
public:
    static Database* getInstance() {
        if (!instance) {
            instance = new Database();
        }
        return instance;
    }
    
    void setConnectionString(const string& conn) {
        connectionString = conn;
    }
    
    string getConnectionString() const {
        return connectionString;
    }
};

Database* Database::instance = nullptr;

// 3. Observer Pattern
class Observer {
public:
    virtual void update(const string& message) = 0;
    virtual ~Observer() {}
};

class Subject {
private:
    vector<Observer*> observers;
    
public:
    void attach(Observer* observer) {
        observers.push_back(observer);
    }
    
    void detach(Observer* observer) {
        observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
    }
    
    void notify(const string& message) {
        for (Observer* observer : observers) {
            observer->update(message);
        }
    }
};

class ConcreteObserver : public Observer {
private:
    string name;
    
public:
    ConcreteObserver(const string& name) : name(name) {}
    
    void update(const string& message) override {
        cout << name << " received: " << message << endl;
    }
};

// 4. Strategy Pattern
class SortingStrategy {
public:
    virtual void sort(vector<int>& arr) = 0;
    virtual ~SortingStrategy() {}
};

class BubbleSort : public SortingStrategy {
public:
    void sort(vector<int>& arr) override {
        cout << "Using Bubble Sort" << endl;
        // Implementation of bubble sort
    }
};

class QuickSort : public SortingStrategy {
public:
    void sort(vector<int>& arr) override {
        cout << "Using Quick Sort" << endl;
        // Implementation of quick sort
    }
};

class Sorter {
private:
    SortingStrategy* strategy;
    
public:
    Sorter(SortingStrategy* strategy) : strategy(strategy) {}
    
    void setStrategy(SortingStrategy* newStrategy) {
        strategy = newStrategy;
    }
    
    void performSort(vector<int>& arr) {
        strategy->sort(arr);
    }
};

int main() {
    // Factory Method Pattern Test
    DocumentFactory* pdfFactory = new PDFFactory();
    Document* pdfDoc = pdfFactory->createDocument();
    pdfDoc->create();
    
    DocumentFactory* wordFactory = new WordFactory();
    Document* wordDoc = wordFactory->createDocument();
    wordDoc->create();
    
    // Singleton Pattern Test
    Database* db1 = Database::getInstance();
    Database* db2 = Database::getInstance();
    cout << "Are db1 and db2 the same instance? " << (db1 == db2) << endl;
    
    // Observer Pattern Test
    Subject subject;
    ConcreteObserver observer1("Observer 1");
    ConcreteObserver observer2("Observer 2");
    
    subject.attach(&observer1);
    subject.attach(&observer2);
    subject.notify("Hello Observers!");
    
    // Strategy Pattern Test
    vector<int> arr = {5, 2, 8, 1, 9};
    Sorter sorter(new BubbleSort());
    sorter.performSort(arr);
    
    sorter.setStrategy(new QuickSort());
    sorter.performSort(arr);
    
    // Cleanup
    delete pdfDoc;
    delete wordDoc;
    delete pdfFactory;
    delete wordFactory;
    
    return 0;
} 