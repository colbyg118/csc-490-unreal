import os
import openai

openai.api_key = ("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")
openai_model = "text-davinci-003"

def generate_response(question):
    prompt = """Suggest some simple answers.

Question: What is the Earth?
Answer: Earth is the third planet from the Sun.
Question: What is the sun?
Answer: It is the closest star to the earth.
Question: {}
Answer:""".format(question.capitalize())

    response = openai.Completion.create(
        model=openai_model,
        prompt=prompt,
        temperature=1,
    )

    return response.choices[0].text

# Example usage

def prompt(question):
    question_str = str(question)  # Convert to string
    result = generate_response(question_str)
    answer = result
    return answer


