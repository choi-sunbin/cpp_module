/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:56:41 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/25 15:59:50 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	Data sunbchoi;

	sunbchoi.data = "sunbchoi";
	
	uintptr_t out = serialize(&sunbchoi);

	Data *data = deserialize(out);

	std::cout << "DATA: " << data->data << std::endl;
}
