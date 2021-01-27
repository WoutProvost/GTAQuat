import subprocess

quats = [
    [-0.237602, -0.237603, 0.665991, -0.665991]
    #[-0.45602, -0.157603, 0.225991, -0.665391]
]

modes = ['zero', 'ieee', 'illidan']

for i in range(len(quats)):
    for j in range(3):
        mode = modes[j]
        quat = quats[i]
        #print('Test case', i, 'below (mode:', mode, ')')
        output = subprocess.check_output(["build/bin/GTAQuat.exe",
            str(quat[0]), str(quat[1]), str(quat[2]), str(quat[3]), str(j)])
        print(output.decode())
