#!/bin/python3

"""
   __  ______  ____  ___    _   _______ ____  ________________________  __
  / / / / __ \/ __ )/   |  / | / / ___// __ \/ ____/  _/ ____/_  __/\ \/ /
 / / / / /_/ / __  / /| | /  |/ /\__ \/ / / / /    / // __/   / /    \  / 
/ /_/ / _, _/ /_/ / ___ |/ /|  /___/ / /_/ / /____/ // /___  / /     / /  
\____/_/ |_/_____/_/  |_/_/ |_//____/\____/\____/___/_____/ /_/     /_/   
                                                                          
"""
"""

Department:     Urbansociety Research

Clearance:      Unrestricted - 0

Description:    Image classification model that can read handwritten digits using Googles TensorFlow modules and the DeepAI MNIST dataset.
                See https://en.wikipedia.org/wiki/Artificial_neural_network for more information on neural networks.

License:        MIT License

                Copyright (c) 2021 Urbansociety

                Permission is hereby granted, free of charge, to any person obtaining a copy
                of this software and associated documentation files (the "Software"), to deal
                in the Software without restriction, including without limitation the rights
                to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
                copies of the Software, and to permit persons to whom the Software is
                furnished to do so, subject to the following conditions:

                The above copyright notice and this permission notice shall be included in all
                copies or substantial portions of the Software.

                THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
                IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
                FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
                AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
                LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
                OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
                SOFTWARE.

"""
"""

Dependencies:

    Python 3.9.7    -   For more information visit https://www.python.org
    TensorFlow      -   For more information visit https://www.tensorflow.org
    Keras           -   For more information visit https://keras.io
    Matplotlib      -   For more information visit https://matplotlib.org

Datasets:

    MNIST Dataset   -   For more information visit https://deepai.org/dataset/mnist

"""
"""

Tested platforms:

	Linux:

		Fedora 34	-	For more information visit https://getfedora.org/

"""

import tensorflow as tf
import matplotlib.pyplot as plt

# Download the OpenAI MNIST dataset
mnist=tf.keras.datasets.mnist

# Prepare the data and split it into a train and a test dataset
(x_train,y_train),(x_test,y_test)=mnist.load_data()
x_train,x_test=x_train/255.0,x_test/255.0

# Look at the first image
print(f"\n[DEBUG]: {x_train[0].shape}\n")

# Create the neural network
model=tf.keras.models.Sequential([
    tf.keras.layers.Flatten(input_shape=[28,28]), # For the neural net we need a list of values not a matrix
    tf.keras.layers.Dense(128, activation='relu'), # A dense layer is the same as a fully connected layer or the linear layer in pytorch
    tf.keras.layers.Dropout(0.2), # Dropout means some of the outputs of the dense layer will be set to zero so that the network doesn't learn all the images by heart
    tf.keras.layers.Dense(10) # Output layer. There are 10 outputs for 10 classes
])

# Make a prediction for the first image
predictions=model(x_train[:1]).numpy()

# Show prediction as probability
print(f"\n[DEBUG]: {tf.nn.softmax(predictions).numpy()}\n")

# Create a loss function
loss_fn=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True)
loss_fn(y_train[:1],predictions).numpy()
model.compile(optimizer='adam',
                loss=loss_fn,
                metrics=['accuracy']
)

# Train the model to reduce loss for a fixed number of epochs
model.fit(x_train,y_train,epochs=50)

# Show information about the test set
print(f"\n[DEBUG]: {x_test.shape}\n")

# Evaluate the model to see how accurate it predicts the integers in the test set
model.evaluate(x_test,y_test,verbose=2)

# Make prediction for the image
predictions=model(x_test[:1]).numpy()
highest_index=0
for x in tf.nn.softmax(predictions):
    for i,y in enumerate(x):
        if(y>x[highest_index]):
            highest_index=i
print(f"\n[PREDICTION]: The image is a {highest_index}\n")