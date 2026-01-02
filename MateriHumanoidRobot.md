## ===={ Review Video }====

![Image](https://github.com/user-attachments/assets/2318a1d9-8a7e-42ca-990f-9506a41e49f9)

### The FASTEST Introduction to Reinforcement Learning on the Internet

**“The FASTEST introduction to Reinforcement Learning on the internet”** merupakan sebuah pengantar singkat namun padat mengenai *Reinforcement Learning (RL)*, salah satu cabang *machine learning* yang mempelajari bagaimana sebuah agen (*agent*) belajar mengambil keputusan terbaik melalui interaksi langsung dengan lingkungan (*environment*) berdasarkan umpan balik berupa *reward* dan *punishment*.

Video ini menjelaskan konsep dasar Reinforcement Learning, meliputi hubungan antara *agent*, *state*, *action*, dan *reward*, serta memperkenalkan **Markov Decision Process (MDP)** sebagai kerangka matematis utama dalam permasalahan RL. Materi kemudian dilanjutkan dengan pembahasan metode pembelajaran seperti **Monte Carlo** dan **Temporal Difference Learning** yang menunjukkan bagaimana agen belajar dari pengalaman.

Selanjutnya, video membahas algoritma yang lebih lanjut, seperti **Q-Learning** dan **Deep Q-Networks (DQN)** yang menggabungkan *deep learning* dengan Reinforcement Learning untuk menangani ruang keadaan yang besar. Selain itu, diperkenalkan pula metode **Policy Gradient** yang mempelajari strategi (*policy*) secara langsung. Video ini juga menyinggung keterkaitan Reinforcement Learning dengan *neuroscience*, keterbatasan pendekatan RL saat ini, serta arah pengembangannya di masa depan.

Secara keseluruhan, video ini memberikan gambaran menyeluruh dan cepat mengenai konsep inti Reinforcement Learning, sehingga sangat cocok sebagai pemahaman awal bagi pemula seperti saya yang ingin memasuki dunia AI dan pembelajaran berbasis keputusan.

---

## ---==[ Review Book ]==---

![Image](https://github.com/user-attachments/assets/a9532f14-eccd-4160-9542-e942e9a6b29d)

### Introduction to Humanoid Robotics

---

### Chapter 1: Introduction (Konsep & Motivasi)

Bab ini membahas alasan utama mengapa **humanoid robot** dikembangkan dan apa yang membedakannya dari jenis robot lainnya. Humanoid robot didefinisikan sebagai robot yang memiliki bentuk menyerupai manusia, khususnya memiliki kepala, badan, dua tangan, dan dua kaki. Penulis menekankan bahwa meskipun tidak semua tugas membutuhkan bentuk humanoid, desain ini menjadi sangat relevan karena **lingkungan dunia nyata sepenuhnya dirancang untuk manusia**.

Tiga keunggulan utama humanoid robot dijelaskan secara mendalam, yaitu:

- Humanoid robot dapat bekerja di lingkungan manusia tanpa perlu modifikasi (seperti tangga, pintu, dan lorong).
- Humanoid robot dapat menggunakan alat-alat yang dirancang untuk manusia secara langsung.
- Bentuk menyerupai manusia membuat robot lebih mudah diterima secara sosial dan emosional.

Bab ini juga mengulas sejarah perkembangan humanoid robot, dimulai dari **WABOT-1 dan WABOT-2** yang dikembangkan oleh Waseda University, hingga lonjakan besar yang terjadi saat Honda memperkenalkan seri **P2, P3, dan ASIMO**. Dijelaskan bahwa keberhasilan Honda tidak hanya bergantung pada algoritma, tetapi juga pada desain mekanik, aktuator presisi, sensor gaya, giroskop, dan akselerometer.

Bab ini ditutup dengan penjelasan tujuan buku, yaitu memberikan fondasi teori **kinematika, dinamika, kontrol, dan simulasi** yang dibutuhkan untuk mengembangkan humanoid robot yang stabil dan mampu bergerak di dunia nyata.

---

### Chapter 2: Kinematics

Bab ini merupakan **fondasi matematis utama dalam humanoid robotics**. Kinematika membahas hubungan antara **gerakan sendi** dengan **posisi serta orientasi bagian tubuh robot**, tanpa memperhitungkan gaya yang bekerja.

Pembahasan diawali dengan sistem koordinat, yaitu:

- **World Coordinate System** (koordinat global)
- **Local Coordinate System** (koordinat lokal pada setiap link)

Dijelaskan bagaimana posisi dan orientasi suatu link dihitung menggunakan **homogeneous transformation matrix**, yang menggabungkan rotasi dan translasi dalam satu matriks.

Selanjutnya, bab ini membahas konsep-konsep penting berikut:

- Representasi rotasi 3D  
- Sudut **roll, pitch, dan yaw**  
- Matriks rotasi dan inversnya  
- Vektor kecepatan sudut (*angular velocity*)  
- Hubungan turunan matriks rotasi dengan kecepatan sudut  

Bab ini kemudian masuk ke topik utama kinematika humanoid robot:

#### Forward Kinematics
Menentukan posisi dan orientasi tangan atau kaki robot berdasarkan sudut semua sendi yang diketahui.

#### Inverse Kinematics
Menentukan sudut sendi yang diperlukan agar tangan atau kaki mencapai posisi dan orientasi tertentu. Inverse kinematics bersifat **nonlinear** dan umumnya diselesaikan menggunakan metode numerik.

#### Jacobian
Jacobian menghubungkan kecepatan sendi dengan kecepatan linear dan sudut dari end-effector. Jacobian sangat penting untuk:
- Kontrol gerakan robot  
- Menghindari kondisi singularitas  
- Perhitungan kecepatan dan gaya  

Bab ini sangat krusial karena hampir seluruh sistem kontrol humanoid robot bergantung pada pemahaman kinematika.

